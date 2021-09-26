#include<stdio.h>

int Max(int a, int b)
{
	return a > b ? a : b;
}

/*int Min(int a, int b)
{
	return a > b ? b : a;
}
*/
int main()
{
	int a, b,c;
	printf("请输入a和b的值\n");
	scanf_s("%d %d", &a, &b);
	c = Max(a, b);
	printf("Max = %d\n", c);
	
/*	c = Min(a, b);
	printf("Min = %d\n", c);
	return 0;
}
*/