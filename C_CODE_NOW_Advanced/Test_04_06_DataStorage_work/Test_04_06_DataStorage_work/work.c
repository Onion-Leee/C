#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
/*
int main()
{
	//unsigned char a = 200;
	//unsigned char b = 100;
	//unsigned char c = 0;
	unsigned int a = 0x1234;
	unsigned char b = *(unsigned char*)&a;
	//c = a + b;
	//printf("% d % d", a + b, c);//300      44
	return 0;
}
*/
/*
int main()
{
	char a[1000] = { 0 };//-128~127
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;   //-1 -2 ...-128 ... 127 126 ... 0
	}
	printf("%d", strlen(a));
	return 0;
}
*/

//6.在屏幕上打印杨辉三角。
//           1
//         1   1
//        1  2  1
//      1  3  3   1
//    1  4   6  4  1
//   1 5  10  10  5  1
/*
#include <stdio.h>
#define N 20
int main()
{
	int i;
	int j;
	int a[N][N];//数组为10行10列
	for (i = 0; i < N; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < N; i++)//从第3行开始处理
	{
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < (2 * N - 2 * i); j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%4d", a[i][j]);//输出数组各元素的值
		}
		printf("\n");
	}
	return 0;
}
*/

//  1
//  1  1
//  1  2  1
//  1  3  3   1
//  1  4  6   4   1
//  1  5  10  10  5  1
/*
#include <stdio.h>
#define N 20
int main()
{
	int i = 0;
	int j = 0;
	int arr[N][N] = { 0 };
	for (i = 0; i < N; ++i)
	{
		arr[i][0] = 1;

		for (j = 1; j <= i; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	for (i = 0; i < N; ++i)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
/*
#include <stdio.h>
int main()
{
	int arr[4] = { 0 };
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		arr[i] = 1;
		if ((arr[0] != 1)
			+ (arr[2] == 1)
			+ (arr[3] == 1)
			+ (arr[3] != 1) == 3)
		{
			break;
		}
		arr[i] = 0;
	}
	printf("%c是凶手！\n", i + 'A');
	return 0;
}


#include <stdio.h>
int main()
{
	char k = 'A';
	for (k = 'A'; k <= 'D'; k++)
	{
		if ((k != 'A') + (k == 'C') + (k == 'D') + (k != 'D') == 3)
		{
			printf("%c是凶手!\n", k);
		}
	}
	return 0;
}
*/

/*
//8.
#include<stdio.h>
int check(int arr[])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (arr[i] == arr[j])
				return 0;
		}
	}
	return 1;
}
int main()
{
	int arr[5] = { 0 };
	for (arr[0] = 1; arr[0] <= 5; arr[0]++)
	{
		for (arr[1] = 1; arr[1] <= 5; arr[1]++)
		{
			for (arr[2] = 1; arr[2] <= 5; arr[2]++)
			{
				for (arr[3] = 1; arr[3] <= 5; arr[3]++)
				{
					for (arr[4] = 1; arr[4] <= 5; arr[4]++)
					{
						if ((arr[1] == 2) + (arr[0] == 3) == 1 &&
							(arr[1] == 2) + (arr[4] == 4) == 1 &&
							(arr[2] == 1) + (arr[3] == 2) == 1 &&
							(arr[2] == 5) + (arr[3] == 3) == 1 &&
							(arr[4] == 4) + (arr[0] == 1) == 1)
							if (check(arr) != 0)
							{
								printf("A:%d  B:%d  C:%d  D:%d  E:%d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

							}

					}
				}
			}
		}
	}
	return 0;
}
*/
#include <stdio.h>
int main()
{
	int a = 10;
	int b = -10;
	return 0;
}

