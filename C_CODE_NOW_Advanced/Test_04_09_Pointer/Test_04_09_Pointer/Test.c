#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main()
{
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	char* str3 = "hello bit.";
	char* str4 = "hello bit.";
	if (str1 == str2) //比较的是地址
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");
	if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");
	return 0;
}
*/
/*
void main()
{
	char* str = "Hello bit.";
	printf("%s\n", str);

	printf("str = %d\n", sizeof(str));  //指针变量的大小 4   强调的是指针
	char str1[] = "Hello bit.";
	printf("%s\n", str1);
	printf("str1 = %d\n", sizeof(str1)); // 11
}
*/

/*
//指针就等价于地址
void main()
{
	char ch = 'A';  //xxx类型 = xxx指针
	//指针数组
	int a = 1;
	int b = 2;
	int c = 3;
	int* ar[3] = { &a,&b,&c };
	//数组指针
	int br[3] = { 10,20,30 };
	int(*par)[3] = &br;
	int i = 10;
}
*/
/*
void main()
{
	int ar[10];//未初始化
	int ar[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
	int br[10] = { 1,2,3,4,5 };//未完全初始化
	int dr[100] = { 0 };
	int er[10];
	for (int i = 0; i <= 5; i++)
	{
		er[i - 1] = i;//赋值
	}
}
*/
/*
void main()
{
	int ar[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("ar size = %d\n", sizeof(ar));
	printf("0x%p\n", &ar[0]);
	printf("0x%p\n",ar);
	printf("0x%p\n",&ar);
}
*/