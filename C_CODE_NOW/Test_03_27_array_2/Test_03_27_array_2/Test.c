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


//ð������  �ų�����,10�����Ļ�9�˾Ϳ���
void BubbleSort(int arr[], int sz)//д�������飬ʵ������ָ��
{
	//ȷ��ð�����������
	int i = 0;
	for (i = 0; i < sz - 1; ++i)
	{
		int j = 0;
		int flag = 1;  //���ÿ��˳������ˣ����轻�����Ϳ��Բ���������
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
void PrintArray(int arr[], int sz)//Ҳ����int *arr
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
	//��������������Ԫ�صĵ�ַ
	//ע�⣺����������
	//1.sizeof(arr) - sizeof(�������� - ��������ʾ�������飬sizeof�������������������������Ĵ�С����λ���ֽ�
	//2.&arr - &������ - ��������ʾ�������飬&������ȡ��������������ĵ�ַ
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


