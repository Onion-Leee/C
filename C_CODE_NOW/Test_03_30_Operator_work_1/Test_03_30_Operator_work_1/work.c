#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
/*
#include<stdio.h>
int i;
int main()
{
	i--;
	if (i > sizeof(i))
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;//a,b = 6
	b = ++c, c++, ++a, a++;//c = 7 a = 7 b = 7
	b += a++ + c;//a = 8 c = 8 b = 7
	printf("a = %d b = %d c = %d\n:", a, b, c);//9  23  8
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int a = 1999;
	//‭0000 0000 0000 0000 0000 0111 1100 1111‬
	int b = 2299;
	//0000 0000 0000 0000 0000 ‭1000 1111 1011‬
	int count = 0;
	int c = a ^ b;
	//0000 0000 0000 0000 0000 1111 0011 0100
	while (c)
	{
		c = c & (c - 1);
		//1.
		//0000 0000 0000 0000 0000 1111 0011 0100
		//0000 0000 0000 0000 0000 1111 0011 0011
		//2.
		//0000 0000 0000 0000 0000 1111 0011 0000
		//0000 0000 0000 0000 0000 1111 0010 1111
		//3.
		//0000 0000 0000 0000 0000 1111 0010 0000
		//0000 0000 0000 0000 0000 1111 0001 1111
		count++;
	}
	printf("count=%d\n", count);
	return 0;
}
*/

/*
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
#include<stdio.h>
int main()
{
	int a = 0;
	while (1)
	{
		printf("please input a num:\n");
		scanf("%d", &a);
		int arr[32] = { 0 };
		int i = 0;
		for (i = 0; i < 32; ++i)
		{
			arr[i] = a % 2;//11(1) 5(1) 2(0) 1(1)
			a = a / 2;// 5 2 1
		}//1101 0000 0000 0000 0000 0000 0000 0000
		printf("偶数：\n");
		for (i = 31; i >= 0; i = i - 2) //0000 0000 0000 0000 0000 0000 0000 1011
		{
			printf("%d ", arr[i]);
		}
		printf("\n奇数：\n");
		for (i = 30; i >= 0; i = i - 2)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	return 0;
}
*/
/*
#include<stdio.h>
int Count(int a)
{
	int c = 0;
	while (a)
	{
		c++;
		a = a & (a - 1);
	}
	return c;
}
int main()
{
	int a = 0;
	while (1)
	{
		printf("please input a num:\n");
		scanf("%d", &a);
		int ret = Count(a);
		printf("count = %d\n", ret);
	}
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	while (1)
	{
		printf("please input two num:\n");
		scanf("%d %d", &a, &b);
		printf("交换后:\n");
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
		printf("%d %d\n", a, b);
	}
	return 0;
}
*/
//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//#include<stdio.h>
//#include<string.h>
/*
int reverse_string(char* str)
{
	int left = 0;
	int right = strlen(str) - 1;
	while (left<right)
	{
		char tmp = str[left]; //str[left] -- 数组的形式   与*（str+left) 完全等价
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
	return str;
}

void reverse_string(char* str)
{
	char tmp = str[0];//1
	int len = strlen(str);
	str[0] = str[len - 1];//2
	str[len - 1] = '\0';//3
	if (strlen(str + 1) >= 2)
		reverse_string(str + 1);//4
	str[len - 1] = tmp;//5
}
int main()
{
	char arr[] = "hello bit";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}
*/

/*
//编写一个函数实现n的k次方，使用递归实现。
#include<stdio.h>
double Power(int n, int k)
{
	if (k > 0)
	{
		return n * Power(n, --k);
	}
	else if(k==0)
	{
		return 1;
	}
	else
	{
		return 1.0 / Power(n, -k);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	printf("please input two num:\n");
	scanf("%d %d", &n, &k);
	double ret = Power(n, k);
	printf("%d的%d次方 = %lf\n", n, k, ret);
	return 0;
}
*/
/*
//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
#include<stdio.h>
void init(int arr[], int sz)
{
	int i = 0;
	printf("初始化数组：\n");
	for (i = 0; i < sz; ++i)
	{
		arr[i] = 0;
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void reverse(int arr[], int sz)
{
	int i = 0;
	int j = sz - 1;
	printf("逆置\n");
	while (i < j)
	{
		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
		++i;
		--j;
	}
}
int main()
{
	int arr[10] = { 2,6,1,3,7,8,0,9,11,22 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("打印\n");
	print(arr, sz);
	reverse(arr, sz);
	print(arr, sz);
	init(arr, sz);
	print(arr, sz);
	return 0;
}
*/
/*
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#include<stdio.h>
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Swap(int arr1[], int arr2[], int sz)
{
	int i = 0;
	printf("交换数组arr1和arr2\n");
	while (i < sz)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
		++i;
	}
}
int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	Print(arr1, sz);
	Print(arr2, sz);
	Swap(arr1, arr2, sz);
	Print(arr1, sz);
	Print(arr2, sz);
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);
	printf("%d\n", i);
	return 0;
}
*/
/*
#include <stdio.h>
int i;
int main()
{
	i--;
	//-1
	//1000 0000 0000 0000 0000 0000 0000 0001
	//1111 1111 1111 1111 1111 1111 1111 1110
	//1111 1111 1111 1111 1111 1111 1111 1111
	if (i > sizeof(i))
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	printf("a = %d b = %d c = %d\n:", a, b, c);
	return 0;
}
*/



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
int main()
{
	int m = 0;
	scanf("%d", &m);
	int i = 0;
	//打印奇数位
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	//打印偶数位
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	return 0;
}