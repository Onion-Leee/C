//#include<stdio.h>

//ת��Reverse ����һ
//void Reverse(int ar[], int n)
//{
//	for (int i = 0; i < (n / 2); ++i)  //�����һ��
//	{
//		int tmp = ar[i];
//		ar[i] = ar[n - i - 1]; //�±���n-1,��Ϊ��0��ʼ��
//		ar[n - i - 1] = tmp;
//	}
//}
 /*
void PrintArray(int ar[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}*/


 /* //������
void Reverse(int ar[], int n)
{
	int i, j;
	for (i = 0, j = n - 1; i < j; ++i, --j)
	{
		int tmp = ar[i];
		ar[i] = ar[j];
		ar[j] = tmp;
		
	}
}
 */
 /*
void main()
{
	int ar[] = { 254,25,484,8,87,96,63,44,887,5465,564,5 };
	int n = sizeof(ar) / sizeof(int);
	PrintArray(ar, n);
	Reverse(ar, n);
	BubbleSort(ar, n);
	PrintArray(ar, n);
}*/






/*
void main()
{
	char ar[10];
	for (int i = 0; i <= 5; ++i)
	{
		ar[i] = 'a' + i;
	}
	ar[5] = '\0';
	printf("ar = %s\n", ar);
	printf("ar = %d\n", sizeof(ar));
	printf("ar = %d\n", strlen(ar));


}*/

//2.�����ӡ�ַ�
 /*
void main()
{
	char ar[10] = { 'H','e','l','l','o' }; //char ar[10] = {"Hello"};
	printf("ar = %s\n", ar);
}*/


//3.ð������ Bubble sort  ����
 /*
void BubbleSort(int ar[], int n)
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
 }*/

//void main()
//{
//	int ar[] = { 254,25,484,8,87,96,63,44,887,5465,564,5 };
//	int n = sizeof(ar) / sizeof(int);
//	PrintArray(ar, n);
//	//Reverse(ar, n);
//	BubbleSort(ar, n);
//	PrintArray(ar, n);
//}

//4.ð������ Bubble sort  ����
 /*
void BubbleSort_1(int ar[], int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (ar[j] < ar[j + 1])
			{
				int tmp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = tmp;
			}
		}
	}
}

void main()
{
	int ar[] = { 254,25,484,8,87,96,63,44,887,5465,564,5 };
	int n = sizeof(ar) / sizeof(int);
	PrintArray(ar, n);
	BubbleSort_1(ar, n);
	PrintArray(ar, n);
}*/

//5.���δ�ӡ

#include<stdio.h>
#include<stdbool.h>
#include<Windows.h>  //����ʱ��  Sleep��xxx��

#define ROW 5
#define COL 5

void PrintBarry(int br[ROW][COL])
{
	bool Is_Right = true;
	for (int i = 0; i < ROW; ++i)
	{
		if (Is_Right)
		{
			for (int j = 0; j < COL; ++j)
			{
				printf("%d ", br[i][j]);
				Sleep(500);
			}
			printf("\n");
			Is_Right = false;
		}
		else
		{
			for (int j = COL - 1; j >= 0; --j)
			{
				printf("%d ", br[i][j]);
				Sleep(500);
			}
			printf("\n");
			Is_Right = true;
		}
	}
}

void main()
{
	int br[ROW][COL];
	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			br[i][j] = i + j;
		}
	}
	for(int i = 0;i<ROW;++i)
	{ 
		for (int j = 0; j < COL; ++j)
		{
			printf("%d ", br[i][j]);
		}
		printf("\n");
	}
	printf("==========================\n");
	PrintBarry(br);
}
