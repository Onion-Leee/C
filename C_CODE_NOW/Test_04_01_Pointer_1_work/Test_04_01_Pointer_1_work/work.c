#define _CRT_SECURE_NO_WARNINGS

/*
//3.
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]); //0 0 3 4 5
	}
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3; //*(pulPtr + 3) = *(pulPtr + 3) + 3
	printf(" % d, % d\n", *pulPtr, *(pulPtr + 3)); // 6 12
	return 0;
}
*/

/*
//6.
#include <stdio.h>
int main()
{
	int a = 0x11223344;
	char* pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a); //11223300
	return 0;
}
*/
/*
//7.дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά����
#include <stdio.h>
void Print(int* p, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(arr, sz);
	return 0;
}
*/
/*
//8.дһ����������������һ���ַ��������ݡ�
#include<stdio.h>
#include<string.h>
void Reverse(char* str)
{
	char tmp = str[0];
	int len = strlen(str);
	str[0] = str[len - 1];
	str[len - 1] = '\0';
	if (strlen(str + 1) >= 2)
		Reverse(str + 1);
	str[len - 1] = tmp;
}
int main()
{
	char str[] = "I am a student";
	Reverse(str);
	printf("%s\n", str);
	return 0;
}
*/

/*
//9.��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
#include<stdio.h>
int Sum(int n)
{
	int sum = 0;
	int count = 0;
	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		count = count * 10 + n;
		sum += count;
	}
	return sum;
}
int main()
{
	int a = 0;
	printf("please input a num:\n");
	scanf("%d", &a);
	int ret = Sum(a);
	printf("ǰ5��֮��Ϊ:%d\n", ret);
	return 0;
}
*/

/*
//10.
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮�����õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
#include<stdio.h>
#include<math.h>
int main()
{
	for (int i = 0; i <= 100000; ++i)
	{
		int count = 1;
		int tmp = i;
		int sum = 0;
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}
		tmp = i;
		while (tmp)
		{
			sum = sum + pow(tmp % 10, count);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
*/

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float y, x, z;
//
//	printf("��һ��\n");
//	printf("��һ����ʶ��\n");
//	printf("������\n");
//	printf("�������\n");
//	printf("������֮����,������֮��ѩ\n");
//	printf("\n\n\n");
//	printf("��ʵ\n");
//	printf("��һ�仰\n");
//	printf("��һֱ�����˵:\n");
//
//	for (double y = 2.5; y >= -1.6; y = y - 0.2)
//	{
//		for (double x = -3; x <= 4.8; x = x + 0.1)
//		{
//			(pow((x * x + y * y - 1), 3) <= 3.6 * x * x * y * y * y
//				|| (x > -2.4 && x < -2.1 && y<1.5 && y>-1)
//				|| (((x < 2.5 && x>2.2) || (x > 3.4 && x < 3.7)) && y > -1 && y < 1.5)
//				|| (y > -1 && y < -0.6 && x < 3.7 && x>2.2)) ? printf("*") : printf(" ");
//		}
//
//		printf("\n");
//	}
//
//	getchar();
//}

//11.��C��������Ļ���������ͼ����
#include<stdio.h>
int main()
{
	int line = 0;
	int i = 0;
	printf("please input a num:\n");
	scanf("%d", &line);
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
