#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
int main()
{
	//数组
	//数组的创建
	//元素的类型   数组名[数组的大小-常量]
	char arr5[] = { 'a','98','c' };
	char arr6[] = "abc";
	printf("%d\n", strlen(arr5));//随机值
	printf("%d\n", strlen(arr6));//3
	printf("%d\n", sizeof(arr5));//3
	printf("%d\n", sizeof(arr6));//4
	return 0;
}
*/
int main()
{
	int arr[][4] = { {1,2},{3,4},{5} };
	return 0;
}