#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

//9.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

void LeftRound(char str[], int n, int sz)
{
	int i = 0;
	assert(*str!=NULL);
	n %= sz;
	while (n--)
	{
		char tmp = str[0];
		for (i = 0; i < sz - 1; i++)
		{
			str[i] = str[i + 1];
		}
		str[sz - 1] = tmp;
	}
}
int main()
{
	int k = 0;
	char str[] = "ABCDEF";
	int len = strlen(str);
	printf("%s\n", str);
	printf("请输入k：");
	scanf("%d", &k);
	LeftRound(str, k, len);
	printf("%s\n", str);
	return 0;
}
/*
//10.杨氏矩阵
int find(int a[4][4], int row, int col, int n)
{
	int i = 0;
	int j = row - 1;

	while (j >= 0 && i < col)
	{
		if (a[i][j] < n)
		{
			i++;
		}
		else if (a[i][j] > n)
		{
			j--;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int a[4][4] = { {1, 5, 7,9},
				  {4, 6, 10,15},
				  {8, 11, 12,19},
				  {14,16,18,21} };

	if (find(a, 4, 4, 12))
	{
		printf("存在！\n");
	}
	else
	{
		printf("不存在！\n");
	}

	return 0;
}
*/

/*
//14.模拟实现strlen
int my_strlen(const char* string)
{
	//要判断参数的有效性
	assert(string != NULL);
	if (*string == '\0')
	{
		return 0;
	}
	return my_strlen(string + 1) + 1;
}
void main()
{
	char* str = "Hello bit";
	printf("my_strlen = %d\n", my_strlen(str));

}
*/
/*
//13.模拟实现strcpy
char* my_strcpy(char* strDestination, const char* strSource)
{
	//要判断参数的有效性
	assert(strDestination != NULL && strSource != NULL);
	//参数保护
	char* pDest = strDestination;
	while (*strSource != '\0')
	{
		*pDest++ = *strSource++;
		//strDestination++;
		//strSource++;
	}
	//将最后一个'\0’赋值过去
	*pDest = '\0';
	return strDestination;
}
void main()
{
	char str1[20] = "HelloBit";
	char* str2 = "Linux";
	printf("str1 = %s\n", str1);
	//strcpy(str1, str2);
	char* res = my_strcpy(str1, str2);
	printf("str1 = %s\n", res);
}
*/

/*
//12.模拟实现strcmp
int my_strcmp(const char* string1, const char* string2)
{
	assert(string1 != NULL && string2 != NULL);
	int res = 0;
	while (*string1 != '\0' || *string2 != '\0')
	{
		//通过减法的方式完成比较
		if ((res = *string1 - *string2) != 0)
			break;
		string1++;
		string2++;
	}
	if (res > 0)
		res = 1;
	else if (res < 0)
		res = -1;
	return res;
}
void main()
{
	char* str1 = "HelloBitab";
	char* str2 = "HelloBitab";
	int res = my_strcmp(str1, str2);
	printf("res = %d\n", res);
}
*/
/*
//11.模拟实现strcat
char* my_strcat(char* strDestination, const char* strSource)
{
	//要判断参数的有效性
	assert(strDestination != NULL && strSource != NULL);
	//参数保护
	char* pDest = strDestination;
	while (*pDest != '\0')
		pDest++;
	while (*strSource != '\0')
		*pDest++ = *strSource++;

	*pDest = '\0';
	return strDestination;
}
void main()
{
	char str1[20] = "HelloBit";
	char* str2 = "Linux";
	printf("str1 = %s\n", str1);
	char* res = my_strcat(str1, str2);
	printf("str1 = %s\n", res);
}
*/
/*
//8.写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
int findRound(const char* src, char* find)
{
	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
	strcpy(tmp, src); //先拷贝一遍
	strcat(tmp, src); //再连接一遍
	return strstr(tmp, find) != NULL; //看看找不找得到
}
int main()
{
	char str1[] = "AABCD";
	char str2[] = "DAABC";
	printf("%d\n", findRound(str1, str2));
	return 0;
}
*/

/*
//7.练习使用库函数，qsort排序各种类型的数据
void PrintfArray(double ar[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%lf ", ar[i]);
	}
	printf("\n");
}
int compare(const void* elem1, const void* elem2)
{
	return (*(double*)elem1 > * (double*)elem2 ? 1 : -1);
}
void main()
{
	double ar[] = { 1.1,0.3,4.4,1.6,2.2,0.7,0.9,8.1,22.4,11.1 };
	int n = sizeof(ar) / sizeof(ar[0]);
	PrintfArray(ar, n);
	qsort(ar, n, sizeof(ar[0]), compare);
	PrintfArray(ar, n);
}
*/
/*
void PrintfArray(char ar[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}
int compare(const void* elem1, const void* elem2)
{
	return (*(char*)elem1 > * (char*)elem2 ? 1 : -1);
}
void main()
{
	char ar[] = { 1,3,4,6,2,7,9,8,22,11 };
	int n = sizeof(ar) / sizeof(ar[0]);
	PrintfArray(ar, n);
	qsort(ar, n, sizeof(ar[0]), compare);
	PrintfArray(ar, n);
}


void PrintfArray(int ar[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}
int compare(const void* elem1, const void* elem2)
{
	return (*(int*)elem1 - *(int*)elem2);
}
void main()
{
	int ar[] = {1,3,4,6,2,7,9,8,22,11 };
	int n = sizeof(ar) / sizeof(ar[0]);
	PrintfArray(ar, n);
	qsort(ar, n, sizeof(ar[0]), compare);
	PrintfArray(ar, n);
}


//6.模仿qsort的功能实现一个通用的冒泡排序
void swap(void* p1, void* p2, int n)
{
	for (int i = 0; i < n; ++i)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}
int cmp(const void* elem1, const void* elem2)
{
	return (*((int*)elem1) - *((int*)elem2));
}
void Bubble(void* base, int count, int size, int(*cmp)(void*, void*))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
		}
	}
}

void  PrintArray(int ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}
void main()
{
	int ar[10] = { 1,3,4,6,2,7,9,8,22,11 };
	int sz = sizeof(ar) / sizeof(ar[0]);
	PrintArray(ar, sz);
	Bubble(ar, sz, sizeof(ar[0]), cmp);
	PrintArray(ar, sz);
}


int main()
{
	int a[5] = { 5, 4, 3, 2, 1 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));   // 4  1
	return 0;
}

int main()
{
	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
	int* ptr1 = (int*)(&aa + 1);   //1
	int* ptr2 = (int*)(*(aa + 1)); //6     *(aa + 1)相当于aa[1] 是第二行的内容
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}
*/