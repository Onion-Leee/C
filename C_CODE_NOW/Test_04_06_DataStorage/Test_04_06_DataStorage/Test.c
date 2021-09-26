#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdbool.h>
/*
int main()
{
	printf("%d\n", sizeof(bool)); //1
	printf("%d\n", sizeof(float)); //4
	printf("%d\n", sizeof(long)); //4
	printf("%d\n", sizeof(double)); //8
	printf("%d\n", sizeof(long long));//8
	return 0;
}
*/
void main()
{
	int count = 0;
	for (char i = 0; i < 127; ++i)
	{
		printf("hello\n");
		count++;
	}
	printf("%d\n", count);
}