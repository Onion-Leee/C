#define _CRT_SECURE_NO_WARNINGS

/*
//9.ʵ��һ�������������ð������
#include<stdio.h>
void BubbleSort(int arr[], int sz)
{
	int i = 0;
	int flag = 1;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
void PrintArr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	PrintArr(arr, sz);
	BubbleSort(arr, sz);
	PrintArr(arr, sz);
	return 0;
}
*/
/*
//10.ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
#include<stdio.h>
void init(int arr[], int sz)
{
	int i = 0;
	printf("��ʼ�����飺\n");
	for (i = 0; i < sz; ++i)
	{
		arr[i] = 0;
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void reverse(int arr[], int sz)
{
	int i = 0;
	int j = sz - 1;
	printf("����\n");
	while (i<j)
	{
		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
		++i;
		--j;
	}
}
int main()
{
	int arr[10] = { 2,6,1,3,7,8,0,9,11,22 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("��ӡ\n");
	print(arr, sz);
	reverse(arr, sz);
	print(arr, sz);
	init(arr, sz);
	print(arr, sz);
	return 0;
}
*/

/*
//11.������A�е����ݺ�����B�е����ݽ��н�����������һ����
#include<stdio.h>
void Print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Swap(int arr1[], int arr2[],int sz)
{
	int i = 0;
	printf("��������arr1��arr2\n");
	while (i<sz)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
		++i;
	}
}
int main()
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[5] = { 6,7,8,9,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	Print(arr1,sz);
	Print(arr2,sz);
	Swap(arr1, arr2,sz);
	Print(arr1, sz);
	Print(arr2, sz);
	return 0;
}
*/

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,(3,4),5 }; 
//	printf("%d\n", sizeof(arr));//16
//	return 0;
//}
#include <stdio.h>
int main()
{
	char str[] = "hello bit";
	printf("%d %d\n", sizeof(str), strlen(str));  //10  9
	return 0;
}