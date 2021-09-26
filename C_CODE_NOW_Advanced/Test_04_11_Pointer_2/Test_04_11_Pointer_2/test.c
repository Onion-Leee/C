#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int* (*(*fun)(int*))[10];



/*
void fun()
{
	printf("Hello bit\n");
}
void main()
{
	fun();
	int(*pa)[3];    //数组
	void (*pfun)();    //函数     函数指针


	pfun = &fun;
	(*pfun) ();

	pfun = fun;
	pfun();
}
*/
/*
#define ROW 5
#define COL 5

void PrintArray(int (*pa)[COL],int row,int col)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("%d ", pa[i][j]);
		}
		printf("\n");
	}
}
void main()
{
	int ar[ROW][COL] = { 0 };
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; ++j)
		{
			ar[i][j] = i + j;
		}
	}
	PrintArray(ar, ROW, COL);

	//for(int i = 0; i < ROW; i++)
	//{
	//	for (int j = 0; j < COL; ++j)
	//	{
	//		printf("%d ",ar[i][j]);
	//	}
	//	printf("\n");
	//}
	////printf("size = %d\n", sizeof(ar));
	//printf("*******************************\n");
	//int(*pa)[COL] = ar;
	//for (int i = 0; i < ROW; ++i)
	//{
	//	for (int j = 0; j < COL; ++j)
	//	{
	//		//printf("%d ", pa[i][j]);
	//		printf("%d ", *(*(pa + i)+j));
	//	}
	//	printf("\n");
	//}
}
*/

/*
void main()
{
	int ar[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%p\n", &ar[0]);
	printf("%p\n", ar);
	printf("%p\n", &ar);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", *(ar + i));
	}
	printf("\n");
	int* pa = ar;
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", *(pa + i));
	}
	printf("\n");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", pa[i]);
	}
	printf("\n");
}
*/