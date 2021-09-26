#define _CRT_SECURE_NO_WARNINGS
/*
#include <stdio.h>
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hello bit\n");
	}
	return 0;
}
*/

//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
#include <stdio.h>
int sort(int p[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while ((left < right) && (p[left] % 2 == 0))
		{
			left++;
		}
		while ((left < right) && (p[right] % 2 == 1))
		{
			right--;
		}
		if (left < right)
		{
			int temp = p[left];
			p[left] = p[right];
			p[right] = temp;
		}
	}
}
void Print(int* p, int n)
{
	int i = 0;
	for (i = 0; i < n; ++i)
	{
		printf("%d ", *p);
		p++;
	}
	printf("\n");
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(arr, sz);
	sort(arr, sz);
	Print(arr, sz);
	return 0;
}

