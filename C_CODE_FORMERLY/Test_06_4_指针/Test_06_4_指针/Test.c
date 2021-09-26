#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N_VALUES 5

//将字符串转换成整型的函数atoi()
void main()
{
	char* str =  "123";
	printf("%s\n", str);
	int value = atoi(str);
}

/*
//命令行参数
//argc:argument count
//argu:argument value
void main(int argc,char *argv[])
{
	printf("argc = %d\n", argc);
	for (int i = 0; i < argc; ++i)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
}

//二级指针
void main()
{
	int a = 10;
	int* p = &a;//一级指针
	int** s = &p;//二级指针
	printf("a addr = %p\n", &a);//a addr = 008FFB10
	printf("p value  = %p\n", p);//p value  = 008FFB10
	printf("p addr = %p\n", &p);//p addr = 008FFB04
	printf("s value = %p\n", s);//s value = 008FFB04
	printf("s addr = %p\n", &s);//s addr = 008FFAF8
}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = arr; //指针存放数组首元素的地址
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
		//&arr[0] = 006FF7AC <====> p+0 = 006FF7AC
		//......
	}
	return 0;
}

void main()
{
	float values[N_VALUES];
	float* vp;
	for (vp = &values[N_VALUES]; vp > & values[0];)
	{
		*--vp = 0;
	}
}

int my_strlen(char* str)
{
	char* start, * end;
	start = end = str;
	while (*end != '\0')
		end++;
	return end - start;
}
void main()
{
	char* str = "Hello Bit";
	int len = my_strlen(str);
	printf("len = %d\n", len);
}

#define N_VALUES 5
void main()
{
	float values[N_VALUES];
	float* vp;
	//指针+-整数；指针的关系运算
	for (vp = &values[0]; vp < &values[N_VALUES];)
	{
		//*vp++ = 0;
		*vp = 0;
		vp++;
	}
}

void main()
{
	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(ar) / sizeof(int);
	//第一种方法，便于观察
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
	//第二种方法
	int* p = ar;
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
	//第三种方法,必须得是顺序的
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", p[i]);
	}
	printf("\n");
}

void fun(int ar[]) //数组在这里退化成了指针
//void fun(int *ar)
{
	printf("in fun ar size  = %d\n", sizeof(ar));//4
}
void main()
{
	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("ar size = %d\n", sizeof(ar));//40
	fun(ar);
}


//三值合一
void main()
{
	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%p\n", &ar[0]); //首元素的地址
	printf("%p\n", ar); //数组名的内容
	printf("%p\n", &ar); //针对整个数组的地址
	printf("%d\n", sizeof(ar));//40

	printf("ar = %p,ar + 1 = %p\n", &ar[0], &ar[0] + 1);//ar = 00CFF878,ar + 1 = 00CFF87C
	printf("ar = %p,ar + 1 = %p\n", ar, ar + 1);//ar = 00CFF878,ar + 1 = 00CFF87C
	printf("ar = %p,ar + 1 = %p\n", &ar, &ar + 1);//ar = 00CFF878, ar + 1 = 00CFF8A0
}
*/