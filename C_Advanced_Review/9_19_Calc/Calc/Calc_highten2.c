#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>


void menu()
{
	printf("****************Calc******************\n");
	printf("**********1.Add******2.Sub************\n");
	printf("**********3.Mul******4.Div************\n");
	printf("****************Calc******************\n");
	printf("��ѡ��  ");
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}

int Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("�������������֣�\n");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}


int main()
{
	int n = 0;
	do
	{
		menu();
		int (*parr[5])(int, int) = { NULL,add,sub,mul,div };
		int x = 0;
		int y = 0;
		int ret = 0;
		scanf("%d", &n);
		switch (n)
		{
			int a = 0;
			int b = 0;
			int ret = 0;
		case 1:
			ret = Calc(add);
			printf("������Ϊ��%d\n", ret);
			break;
		case 2:
			ret = Calc(sub);
			printf("������Ϊ��%d\n", ret);
			break;
		case 3:
			ret = Calc(mul);
			printf("������Ϊ��%d\n", ret);
			break;
		case 4:
			ret = Calc(div);
			printf("������Ϊ��%d\n", ret);
			break;
		default:printf("error\n");
		}

	} while (n);
	return 0;
}
