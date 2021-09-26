#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

//1.写一个函数可以判断一个数是不是素数
//素数是除了1和本身之外，不能再整除
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

/*2.判断闰年：年除4等于0并且年除100不等于0或者年除400等于0
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

//3.写一个函数，实现一个整形有序数组的二分查找
//冒泡排序
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
//打印函数
 void PrintArray(int ar[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}
//普通查找查询数字下标
 int Find(int ar[], int n, int key)
{
	for (int i = 0; i < n; ++i)
	{
		if (ar[i] == key)
			return i;
	}
	return -1;
}
//二分查找,log2(n)
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

//4.写一个函数，每调用一次这个函数，就会将num的值加1
int count = 0;
void CountFun()
{ 
	count++;
}
 void main()
{
	int ar[] = { 1122,4203,5,6,810,9,56,258,468 };
	int n = sizeof(ar) / sizeof(int);
	//普通查找,查询数字的下标
	int index = Find(ar, n, 9);
	PrintArray(ar, n);
	Sort(ar, n);
	PrintArray(ar, n);//排序完打印的
	//二分查找
	index = BinSearch(ar, n, 9);
	//函数调用次数查询
	CountFun();
	CountFun();
	CountFun();
	printf("count = %d\n", count);

}