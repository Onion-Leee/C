#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

//1.дһ�����������ж�һ�����ǲ�������
//�����ǳ���1�ͱ���֮�⣬����������
 /*bool IsPrime(int value)
{
	if (value == 1)
	{
		return false;
	}
	for (int i = 2; i < value; ++i)
	{
		if (value % i == 0)
			return false;
	}
	return true;
}

void main()
{
	int num;
	bool flag;
	while (1)
	{
		printf("num:");
		scanf("%d", &num);
		flag = IsPrime(num);
		if (flag)
		{
			printf("%d is Prime.\n", num);
		}
		else
		{
			printf("%d is not Prime.\n", num);
		}
	}
}*/

/*2.�ж����꣺���4����0�������100������0�������400����0
bool IsLeap(int year)
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
		printf("year:");
		scanf("%d", &year);
		flag = IsLeap(year);
		if (flag)
		{
			printf("%d is Leap.\n", year);
		}
		else
		{
			printf("%d is not Leap.\n", year);
		}
	}
}*/

//3.дһ��������ʵ��һ��������������Ķ��ֲ���
//ð������
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
//��ӡ����
 void PrintArray(int ar[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}
//��ͨ���Ҳ�ѯ�����±�
 int Find(int ar[], int n, int key)
{
	for (int i = 0; i < n; ++i)
	{
		if (ar[i] == key)
			return i;
	}
	return -1;
}
//���ֲ���,log2(n)
 int BinSearch(int ar[], int n, int key)
{
	int low = 0;
	int high = n - 1;
	int mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (key < ar[mid])

			high = mid - 1;
		else if (key > ar[mid])
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}

//4.дһ��������ÿ����һ������������ͻὫnum��ֵ��1
int count = 0;
void CountFun()
{ 
	count++;
}
 void main()
{
	int ar[] = { 1122,4203,5,6,810,9,56,258,468 };
	int n = sizeof(ar) / sizeof(int);
	//��ͨ����,��ѯ���ֵ��±�
	int index = Find(ar, n, 9);
	PrintArray(ar, n);
	Sort(ar, n);
	PrintArray(ar, n);//�������ӡ��
	//���ֲ���
	index = BinSearch(ar, n, 9);
	//�������ô�����ѯ
	CountFun();
	CountFun();
	CountFun();
	printf("count = %d\n", count);

}