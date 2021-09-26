#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<vld.h>
/*
//模拟实现
void* my_realloc(void* memblock, size_t size)
{
	//1 申请一个更大的空间
	void* new_memblock = malloc(size);
	if (new_memblock != NULL)
		return NULL;
	//2 把原来的数据进行拷贝
	memcpy(new_memblock, memblock, size);
	//3 释放原有的空间
	free(memblock);

	//4  返回新的空间地址
	return new_memblock;
}
void main()
{
	int* ptr1 = (int*)malloc(sizeof(int) * 5);
	assert(ptr1 != NULL);
	for (int i = 0; i < 5; ++i)
		ptr1[i] = i + 1;
	//free(ptr1);
	int* tmp = NULL;
	tmp = my_realloc(ptr1, sizeof(int) * 10);
	if (tmp == NULL)
	{
		ptr1 = tmp;
	}
	else
	{
		free(ptr1);
		return;
	}
	for (int i = 5; i < 10; i++)
		ptr1[i] = i + 1;
	for (int i = 0; i < 10; ++i)
		printf("%d ", ptr1[i]);
}
*/
/*
void main()
{
	int* ptr1 = (int*)malloc(sizeof(int) * 5);
	assert(ptr1 != NULL);
	for (int i = 0; i < 5; ++i)
		ptr1[i] = i + 1;
	//free(ptr1);
	int* tmp = NULL;
	tmp = realloc(ptr1, sizeof(int) * 10);
	if (tmp == NULL)
	{
		free(ptr1);
		return;
	}
	for (int i = 5; i < 10; i++)
		ptr1[i] = i + 1;
	for (int i = 0; i < 10; ++i)
		printf("%d ", ptr1[i]);
}


void main()
{
	int* ptr1 = (int*)malloc(sizeof(int) * 10);
	assert(ptr1 != NULL);
	int* ptr2 = (int*)calloc(10, sizeof(int));  //calloc会使用0进行初始化
	assert(ptr2 != NULL);
	free(ptr1);
	free(ptr2);
	ptr1 = NULL;
	ptr2 = NULL;
}
*/
//void main()
//{
//	//void *  泛型指针
//	int n;
//	printf("input n:");
//	scanf("%d", &n);
//	//int* str  =NULL;
//	//str = (int*)malloc(sizeof(int) * n);
//	int* ar = NULL;
//	ar = (int*)malloc(sizeof(int) * n);
//	free(ar); //预防野指针
//	//ar = NULL;
//	//free(ar);
//	if (NULL == ar)
//	{
//		printf("NULL");
//		return;
//	}
//	for (int i = 0; i < n; ++i)
//	{
//		ar[i] = i + 1;
//		printf("%d ", ar[i]);
//	}
//}
/*
void main()
{
	const int n = 10; //const 常量
	//int ar[n];
}

void main()
{
	int a = 10;
	int b = 20;
}

int main()
{
	//静态开辟
	int a = 0;
	char ar[10] = { 0 };
	return 0;
}
*/
/*
int main()
{
	//代码1
	int num = 0;
	scanf("%d", &num);
	int arr[num] = { 0 };
	//代码2
	int* ptr = NULL;
	ptr = (int*)malloc(num * sizeof(int));
	if (NULL != ptr)//判断ptr指针是否为空
	{
		int i = 0;
		for (i = 0; i < num; i++)
		{
			*(ptr + i) = 0;
		}
	}
	free(ptr);//释放ptr所指向的动态内存
	ptr = NULL;//是否有必要？
	return 0;
}
*/

//#include<stdio.h>
//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (NULL != p)
//	{
//	   //使用空间
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//柔性数组
//代码1
#include<stdio.h>
typedef struct st_type
{
	int i;
	int a[0];//柔性数组成员
}type_a;
void main()
{
	printf("%d\n", sizeof(type_a));//输出的是4
	int i = 0;
	type_a* p = (type_a*)malloc(sizeof(type_a) + 100 * sizeof(int));
	//业务处理
	p->i = 100;
	for (i = 0; i < 100; i++)
	{
		p->a[i] = i;
	}
	free(p);
}

//代码2
//#include<stdio.h>
//typedef struct st_type
//{
//	int i;
//	int* p_a;
//}type_a;
//void main()
//{
//	type_a* p = malloc(sizeof(type_a));
//	p->i = 100;
//	p->p_a = (int*)malloc(p->i * sizeof(int));
//	//业务处理
//	for (int i = 0; i < 100; i++)
//	{
//		p->p_a[i] = i;
//	}
//	//释放空间
//	free(p->p_a);
//	p->p_a = NULL;
//	free(p);
//	p = NULL;
//}