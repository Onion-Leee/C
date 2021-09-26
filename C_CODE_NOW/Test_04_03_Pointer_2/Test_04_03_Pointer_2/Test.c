#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
int main()
{
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr; //强制类型转换
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/
/*
int main()
{
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;
	printf("%d %d\n", *pulPtr,*(pulPtr + 3));
	return 0;
}
*/
/*
int main()
{
	int a = 0x11223344;
	char* pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a);
	return 0;
}
*/

/*
#include<string.h>
void Reverse(char* str)
{
	char tmp = str[0];
	int len = strlen(str);
	str[0] = str[len - 1];
	str[len - 1] = '\0';
	if (strlen(str + 1) >= 2)
		Reverse(str + 1);
	str[len - 1] = tmp;
}
void reverse(char* str)
{
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;
	char tmp = 0;
	while (left < right)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[20] = { 0 };
	char str[] = "I am a student";
	gets(arr);
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}
*/
/*
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	int ret = 0;//计算存储好的每一项
	scanf("%d%d", &a, &n);
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}
*/
/*
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int count = 1;
		int sum = 0;
		//判断i是否为“水仙花数”
		//1.计算i的位数
		int tmp = i;
		while (tmp /= 10)
		{
			count++;
			//i /= 10;
			//count++;
		}
		//2.得到i的每一位，计算每一位的位数次方和
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp /= 10;
		}
		//3.判断
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
*/

//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
/*
int main()
{
	int line = 0;
	scanf("%d", &line);  //7
	//打印上部分
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//打印一行
		//先打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下部分
	for (i = 0; i < line - 1; i++)
	{
		//打印一行
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");

	}
	return 0;
}
*/
/*
int main()
{
	//二级指针
	int a = 10;
	int* pa = &a; //一级指针
	int** ppa = &pa; //ppa是二级指针  大小和一级指针一样
	printf("%d\n", **ppa);
	return 0;
}
*/

/*
//
//指针数组
//
int main()
{
	//int arr[10] = { 0 }; //整型数组 - 存放整型数据
	//char ch[5] = { 0 }; //字符数组 - 存放字符数据
	//                    //指针数组 - 存放指针（地址）的
	//int* arr2[4]; //整型指针数组
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int* arr2[4] = { &a,&b,&c,&d };//整型指针数组
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d ", *arr2[i]);
	}
	return 0;
}
*/
