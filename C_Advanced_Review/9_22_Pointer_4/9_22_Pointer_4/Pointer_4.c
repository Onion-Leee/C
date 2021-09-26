#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//sizeof(数组名) - 数组名表示整个数组的-计算的是整个数组的大小
//&数组名 - 数组名表示整个数组，取出的是整个数组的地址
//除此之外，所有的数组名都是数组首元素的地址
//
//
int main()
{
	int a[] = { 1,2,3,4 };//4*4=16
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a + 0));//4/8 -- a+0是第一个元素的地址，这句话是计算的地址的大小
	printf("%d\n", sizeof(*a));//4 -- *a是数组的第一个元素，其计算的是第一个元素的大小
	printf("%d\n", sizeof(a + 1));//4/8
	printf("%d\n", sizeof(a[1]));//4 -- 其计算的是第二个元素的大小

	printf("%d\n", sizeof(&a));//4/8 -- &a虽然是数组的地址，但是sizeof(&a)计算的是一个地址的大小
	printf("%d\n", sizeof(* &a));//16 -- 计算的是数组的大小（取地址后又解引用相当于抵消了）
	//&a -- int(*p)[4] = &a;
	printf("%d\n", sizeof(&a + 1));//4/8 - 计算的是数组后面的空间的大小
	printf("%d\n", sizeof(&a[0]));//4/8
	printf("%d\n", sizeof(&a[0] + 1));//4/8

	//字符数组
	char arr[] = { 'a','b','c','d','e','f' };

	printf("%d\n", strlen(arr));//随机值（不知道f后面的'\0'在什么位置）
	printf("%d\n", strlen(arr + 0));//随机值
	printf("%d\n", strlen(*arr));//error 字符a的地址 ，也就是ASCII为97的地址，把97当成了一个地址
	printf("%d\n", strlen(arr[1]));//error
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr + 1));//随机值 - 6
	printf("%d\n", strlen(&arr[0] + 1));//随机值 - 1

	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4/8（字符的地址也是地址，编号也是四个或者八个字节）
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8
	printf("%d\n", sizeof(&arr + 1));//4/8（跳过了一个数组）
	printf("%d\n", sizeof(&arr[0] + 1));//4/8



	char arr[] = "abcdef";//sizeof的大小加上了'\0'
	//[a b c d e f \0]
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//error
	//printf("%d\n", strlen(arr[1]));//error
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//随机值
	printf("%d\n", strlen(&arr[0] + 1));//5


	//[a b c d e f \0] //sizeof的大小加上了'\0'
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr + 0));//4/8
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8（取出的是整个数组的地址，但还是地址）
	printf("%d\n", sizeof(&arr + 1));//4/8
	printf("%d\n", sizeof(&arr[0] + 1));//4/8

	char* p = "abcdef";

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//error
	printf("%d\n", strlen(p[0]));//error
	printf("%d\n", strlen(&p));//随机值 -- 因为从a的地址开始往后数，不知道地址是什么样的，也不知道里面是否有'\0',所以是随机值。
	printf("%d\n", strlen(&p + 1));//随机值
	printf("%d\n", strlen(&p[0] + 1));//5


	printf("%d\n", sizeof(p));//4/8 -- 虽然p只是个字符指针，但也是个指针
	printf("%d\n", sizeof(p + 1));//4/8 -- 是地址他的大小就是4/8
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//1
	printf("%d\n", sizeof(&p));//4/8
	printf("%d\n", sizeof(&p + 1));//4/8
	printf("%d\n", sizeof(&p[0] + 1));//4/8

	return 0;
}