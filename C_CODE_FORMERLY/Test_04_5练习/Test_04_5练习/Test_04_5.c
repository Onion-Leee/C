#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
//�ж�һ�����ǲ�������

 /*bool Sushu(int num)
{
	int i;
	for (i = 2; i < num; ++i)
	{
		if (num % i == 0)
			return false;

	}
	return true;
}

void main()
{
	int num;
	bool flag;
	int IsSushu;
	while (1)
	{

		printf("������һ������:");
		scanf("%d", &num);
		flag = Sushu(num);
		if (flag)
		{
			printf("%d������\n", num);
		}
		else
		{
			printf("%d��������\n", num);
		}
	}

}*/

//�ж��Ƿ�������
 /*bool IsLeap(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return true;
	return false;
}
void main()
{
	int year;
	bool flag;
	while (1)
	{

		printf("������һ�����:");
		scanf("%d", &year);
		flag = IsLeap(year);
		if (flag)
		{
			printf("%d������\n", year);
		}
		else
		{
			printf("%d��������\n", year);
		}
	}
	
}*/

//ʵ��һ��������������Ķ��ֲ���
void Sort(int ar[], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (ar[j] > ar[j + 1])
			{
				int tmp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = tmp;
			}
		
		}
	}
}

void Print(int ar[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}
int BiSearch(int ar[], int n, int key)
{
	int mid, high, low;
	high = n - 1;
	low = 0;
	while(low <= high)
	{
		mid = (high + low) / 2;
		if (key > ar[mid])
		{
			low = mid + 1;
		}
		else if (key < ar[mid])
		{
			high = mid - 1;
		}
		else
			return mid;
	}
	return -1;
}
int Zhaoxiabao(int ar[], int n, int key)
{
	for (int i = 0; i < n; ++i)
	{
		if (ar[i] == key)
			return i;
	}
	return -1;
}

void main()
{
	int ar[] = { 20,30,2,5,91,25,84,75,32,51,55 };
	int n = sizeof(ar) / sizeof(int);
	//int T = Zhaoxiabao(ar, n, 91);
	
	Print(ar, n);
	Sort(ar, n);
	Print(ar, n);
	int B = BiSearch(ar, n, 32);
}