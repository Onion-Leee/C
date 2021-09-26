#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
//操作符作业
//写一个函数返回参数二进制（补码）中 1 的个数。
int Count(int a)
{
	int c = 0;
	while (a)
	{
		a = a & (a - 1);
		c++;
	}
	return c;
}
int Count1(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}
int Count2(int n)
{
	int count2 = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count2++;
		}
	}
	return count2;
}
int main()
{
	int a = 0;
	while (1)
	{
		printf("please input a num:\n");
		scanf("%d", &a);
		int ret = Count2(a);
		printf("count = %d\n", ret);
	}
	return 0;
}
*/
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int count = 0;
//	int c = a ^ b;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//打印整数二进制的奇数位和偶数位

//int main()
//{
//	int a = 0;
//	while (1)
//	{
//		printf("please input a num:\n");
//		scanf("%d", &a);
//		int arr[32] = { 0 };
//		int i = 0;
//		for (i = 0; i < 32; ++i)
//		{
//			arr[i] = a % 2;
//			a = a / 2;
//		}
//		printf("偶数：\n");
//		for (i = 31; i >= 0; i = i - 2)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("\n奇数：\n");
//		for (i = 30; i >= 0; i = i - 2)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	//打印奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	//打印偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	return 0;
//}






/*
//指针
int main()
{
	int a = 0x11223344;
	//指针类型是有意义的
	//1.指针类型决定了指针进行解引用操作能访问多大空间
	//char *指针，解引用操作符访问一个字节    int*指针解引用访问4个字节
	//2.指针类型决定了指针+1，跳过多少字节（走一步，走多大距离）
	//char*指针+1，向后跳1个字节
	//int*指针+1，向后跳4个字节
	return 0;
}
*/
/*
int main()
{
	int a = 0;//如果不初始化的话，局部变量- 随机值
	int* p;//野指针
	return 0;
}
*/
/*
int main()
{
	int a = 10;
	int* p = &a; //初始化
	int* p3 = NULL;//不知道让p2指向哪里
	//使用p访问了a
	p = NULL;
	if (p != NULL)
	{
		*p = 0;
	}
	return 0;
}
*/

/*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	char ch[5] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]); //地址 - 地址 -->指针 - 指针
	//指针 - 指针 的绝对值 是 计算的指针和指针之间元素的个数
	//前提 ：两个指针指向同一块空间
	return 0;
}
*/

/*
//my_strlen的实现  1.计数器  2.递归  3.指针-指针
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	int len = my_strlen("abc");
	printf("%d\n", len);
	return 0;
}
*/

/*
int main()
{
	int arr[10] = { 0 };
	//数组名是数组首元素的地址
	//两个例外
	//1.sizeof(数组名)，这里的数组名，表示整个数组，sizeof（数组名）计算的是整个数组的大小
	//2.&数组名 ，这里的数组名，表示整个数组，&数组名  取出的是整个数组的地址
	printf("%p\n", arr); //008FF768
	printf("%p\n", arr+1); //008FF76C
	printf("%p\n", &arr[0]);//008FF768
	printf("%p\n", &arr[0]+1);//008FF76C
	printf("%p\n", &arr);//数组指针类型 008FF768
	printf("%p\n", &arr+1);//008FF790  //与上面相差十六进制的28，也就等于10进制的40
	return 0;
}
*/

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < 10; i++)
	//{
	//	//printf("%d ", i[arr]);
	//	printf("%d ", arr[i]); //arr[i] ==> *(arr+i)
	//}
	//数组可以通过指针来访问
	for (i = 0; i < sz; ++i)
	{
		//printf("%p --- %p\n", p + i, &arr[i]);
		*(p + i) = i + 1;
	}
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", *(p + i)); //*(arr+i)  arr[i]  p[i]
	//	//printf("%d ", p[i]);  //i[p] == *(i+p) == *(p+i) == p[i]
	//	//printf("%d ", i[p]);  //arr[i]
	//}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}