#define _CRT_SECURE_NO_WARNINGS
/*
#include<stdio.h>
//1.ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
#include<math.h>
int IsPrime(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); ++i)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		if (IsPrime(i) == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d", count);
	return 0;
}
*/

/*
// дһ�������ж�һ���ǲ�������
#include<stdio.h>
int IsLeap(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	while (1)
	{
		printf("please input a year:");
		scanf("%d", &year);
		if (IsLeap(year) == 1)
		{
			printf("%d������\n", year);
		}
		else
		{
			printf("%d��������\n", year);
		}
	}
	return 0;
}
*/
/*
#include<stdio.h>
void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("please input two num a and b:\n");
	scanf("%d %d", &a, &b);
	printf("����ǰ��a = %d b = %d\n", a, b);
	Swap(&a, &b);
	printf("������a = %d b = %d\n", a, b);
	return 0;
}
*/

//�Զ���ھ���
#include<stdio.h>
int Print(int x)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= x; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("%d*%d =%2d  ", i, j, j * i);
			if (i == j)
				printf("\n");
		}
	}
	return 0;
}
int main()
{
	int a = 0;
	while (1)
	{
		printf("please input a num:\n");
		scanf("%d", &a);
		int print = Print(a);
	}
	return 0;
}