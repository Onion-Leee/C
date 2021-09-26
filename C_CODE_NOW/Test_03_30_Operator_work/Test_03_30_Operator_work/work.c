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

