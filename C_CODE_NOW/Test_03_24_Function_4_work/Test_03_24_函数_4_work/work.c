#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.
 /*
 #include<stdio.h>
int Print(int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d ", n % 10);
	return 0;
}
int main()
{
	int n = 0;
	printf("please input a num:\n");
	scanf("%d", &n);
	Print(n);
	return 0;
}*/

//2.
/*
//�ݹ�
//int Fac(int n)
//{
//	if (n >= 2)
//	{
//		return n * Fac(n - 1);
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	printf("please input a num:\n");
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d�Ľ׳�Ϊ%d\n", n, ret);
//	return 0;
//}
//�ǵݹ�
int Fac(int n)
{
	int x = 1;
	for (int i = 1; i <= n; ++i)
	{
		x = x * i;
	}
	return x;
}
int main()
{
	int n = 0;
	printf("please input a num:\n");
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d�Ľ׳�Ϊ%d\n", n, ret);
	return 0;
}
*/

/*
//3.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ǵݹ�
int MyStrlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		str = str + 1;
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "bit";
	int len = MyStrlen(arr);
	printf("%d\n", len);
	return 0;
}

//�ݹ�
//int MyStrlen(char* str)
//{
//	if(*str != '\0')
//	{
//		return 1 + MyStrlen(str + 1);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = MyStrlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
*/

/*
//4.�ַ������򣨵ݹ�ʵ�֣�
#include<stdio.h>
int Reverse(char* p)
{
	if (*p != '\0')
	{
		Reverse(p + 1);
		printf("%c", *p);
	}
	return 0;
}
int Print(char* p)
{
	while (*p != '\0')
	{
		printf("%c", *p);
		p++;
	}
	printf("\n");
	return 0;
}
int main()
{
	char arr[] = "bit";
	Print(arr);
	Reverse(arr);
	return 0;
}
*/

/*
//5.дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
#include<stdio.h>
int DigitSum(int n)
{
	if (n > 9)
	{
		return (n % 10) + DigitSum(n / 10);
	}
	return n;
}
int main()
{
	int n = 0;
	printf("please input a num:\n");
	scanf("%d", &n);
	int ret = DigitSum(n);
	printf("%d\n", ret);
	return 0;
}
*/


//6.��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
#include<stdio.h>
int Power(int n, int k)
{
	if (k > 1)
	{
		return n * Power(n, --k);
	}
	return n;
}
int main()
{
	int n = 0;
	int k = 0;
	printf("please input two num:\n");
	scanf("%d %d", &n, &k);
	int ret = Power(n, k);
	printf("%d��%d�η� = %d\n", n, k, ret);
	return 0;
}

/*
//7.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//�ǵݹ�
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//�ݹ�
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}
*/