#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*
//��򵥵ĵݹ�
int main()
{
	printf("hehe\n");
	main();
	return 0;
}
*/

/*
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�� ���磺 ���룺1234����� 1 2 3 4
void Print(unsigned int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	Print(num);
	//Print(123)
	//Print(12) + 3
	//Print(1) + 2 + 3
	//1 2 3
	return 0;
}
*/
/*
//��д��������������ʱ���������ַ����ĳ���
#include<string.h>
//����������ʱ����
int my_strlen(char* str)
{
	if (*str!= '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}
//int my_strlen(char* str)
//{
//	int count = 0; //����ʱ����
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
int main()
{
	char arr[] = "bit"; //����������Ԫ�ص�ַ - char�ĵ�ַ -char*
	int len = my_strlen("arr");
	printf("%d\n", len);
	//my_strlen("bit");
	//1 + my_strlen("it");
	//1 + 1 + my_strlen("t");
	//1 + 1 + 1 + my_strlen("");
	//1 + 1 + 1 + 0;
	return 0;
}
*/
/*
//��n�Ľ׳�
int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	//int i = 0;
	//int ret = 1;
	//for (i = 1; i <= n; i++)
	//{
	//	ret = ret * i;
	//}
	printf("ret = %d\n", ret);
	return 0;
}
*/


//���n��쳲����������������������
//쳲���������
//1 1 2 3 5 8 13 21 34 55 ...
int Fib(int n)
{
	int a = 1;
	int b = 2;
	int c = 0;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
//�ݹ�İ汾(���ֹ���Ļ�Ч�ʼ�����£�
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}

