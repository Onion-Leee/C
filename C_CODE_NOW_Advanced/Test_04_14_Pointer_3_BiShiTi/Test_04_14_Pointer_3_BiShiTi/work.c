#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));  //    2   5
	return 0;
}
*/

struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？
int main()
{
	printf("%p\n", p + 0x1); // +4
	printf("%p\n", (unsigned long)p + 0x1); //+1
	printf("%p\n", (unsigned int*)p + 0x1); //+4
	return 0;
}