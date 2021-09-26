#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
int main()
{
	int arr[3][4] = { {1,2},{3,4},{5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/


//冒泡排序  排成升序,10个数的话9趟就可以
void BubbleSort(int arr[], int sz)//写的是数组，实际上是指针
{
	//确定冒泡排序的趟数
	int i = 0;
	for (i = 0; i < sz - 1; ++i)
	{
		int j = 0;
		int flag = 1;  //如果每趟顺序可以了，无需交换，就可以不用再排序
		for (j = 0; j < sz - 1 - i; j++)
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
void PrintArray(int arr[], int sz)//也可以int *arr
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
	PrintArray(arr, sz);
	BubbleSort(arr, sz);
	PrintArray(arr, sz);
	return 0;
}


/*
int main()
{
	int arr[10] = { 1,2,3,4,5 };
	//数组名是数组首元素的地址
	//注意：有两个例外
	//1.sizeof(arr) - sizeof(数组名） - 数组名表示整个数组，sizeof（数组名）计算的是整个数组的大小，单位是字节
	//2.&arr - &数组名 - 数组名表示整个数组，&数组名取出的是整个数组的地址
	printf("%p\n", arr); //00EFFAAC
	printf("%p\n", arr + 1); //+4

	printf("%p\n", &arr[0]);//00EFFAAC
	printf("%p\n", &arr[0] + 1);//+4

	printf("%p\n", &arr);//00EFFAAC
	printf("%p\n", &arr + 1);//+40
	printf("%d\n", *arr);//1
	return 0;
}
*/



