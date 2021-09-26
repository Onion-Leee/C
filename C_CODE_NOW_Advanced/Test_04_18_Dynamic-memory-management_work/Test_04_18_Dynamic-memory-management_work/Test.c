#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
/*
void find(int* arr, int len, int* px, int* py)
{
	int i = 0;
	int num = 0;
	int pos = 0;
	for (i = 0; i < len; i++)
	{
		num ^= arr[i];
	}
	//整体异或的结果，存放到了num
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
		{
			pos = i;
			break;
		}
	}
	//分组异或
	for (i = 0; i < len; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			*px = *px ^ arr[i];
		}
		else {
			*py = *py ^ arr[i];
		}
	}
}
int main()
{
	int arr[] = { 1,1,2,3,4,4,5,3,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	int y = 0;
	find(arr, sz, &x, &y);
	return 0;
}
*/

//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
void find(int arr[], int n)
{
	assert(arr != NULL);
	int res = arr[0];
	int i = 1;
	int flag = 1;
	int x = 0;
	int y = 0;
	for (; i < n; ++i)
	{
		res ^= arr[i];
	}
	for (i = 0; i < 32; i++)
	{
		if (res & (flag <<= i))
			break;
	}
	for (i = 0; i < n; i++)
	{
		if (flag & arr[i])
			x ^= arr[i];
		else
			y ^= arr[i];
	}
	printf("%d,%d\n", x, y);
}
int main()
{
	int arr[] = { 1,1,2,3,4,4,5,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	find(arr, sz);
	return 0;
}

/*
#include<string.h>
#include<assert.h>
//9.模拟实现strncpy
char* my_strncpy(char* dest, const char* src, size_t len)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	char* tmp = NULL;
	int offset = 0;
	if (strlen(src) < len)
	{
		offset = len - strlen(src);
		len = strlen(src);
	}
	if (dest > src&& dest < src + len)
	{
		dest = dest + len - 1;
		src = src + len - 1;
		tmp = dest;
		while (len--)
		{
			*ret++ = *src++;
		}
	}
	else
	{
		while (len--)
		{
			*dest++ = *src++;
			tmp = dest;
		}
	}

	while (offset--)
	{
		*tmp++ = '\0';
	}
	return ret;

}
int main()
{
	char arr1[10] = "Hello";
	char arr2[10] = "word";
	//strncpy(arr1, arr2, 3);
	my_strncpy(arr1, arr2, 3);
	printf("%s\n", arr1);
	return 0;
}
*/

/*
#include<stdio.h>
#include<assert.h>
#include<string.h>

//8.模拟实现strncat
char* my_strncat(char* dest, char* src, size_t len)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	int offset = 0;
	while (*dest)
	{
		dest++;
	}
	if (strlen(src) < len)
	{
		len = strlen(src);
	}
	while (len--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return ret;
}
int main()
{
	char arr1[10] = "Hello";
	char arr2[10] = "Word";

	printf("%s\n", my_strncat(arr1, arr2, 4));
	return 0;
}
*/
/*
#include<stdlib.h>
#include<assert.h>
#include<ctype.h>
//模拟实现
//7、模拟实现atoi
//atoi规则: 跳过不可见字符，碰到负号或者
//数字开始转换，转换到非数字字符为止

enum State
{
	VALID,
	INVALID
};
enum State state = INVALID;
int my_atoi(const char* str)
{
	long long ret = 0;
	int flag = 1;
	assert(str != NULL);
	if (*str == '\0')
	{
		return 0;
	}
	while (isspace(*str))
	{
		str++;
	}
	if (*str == '+')
	{
		str++;
	}
	else if (*str == '-')
	{
		str++;
		flag = -1;
	}

	while (*str)
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + (*str - '0') * flag;
			if (ret > INT_MAX&& ret < INT_MIN)//越界情况
			{
				return 0;
			}
		}
		else
		{
			state = VALID;//合法状态
			return (int)ret;
		}
		str++;
	}
	state = VALID;
	return (int)ret;
}


int main()
{
	char* p = "-2122121212127";
	int ret = my_atoi(p);
	if (state == VALID)
		printf("%d\n", ret);
	return 0;
}
*/
/*
enum State
{
	VALID,
	INVALID
};
enum State state = INVALID;
int my_atoi(char* str)
{
	int flag = 1;
	long long ret = 0;
	assert(str!=NULL);
	state = INVALID;
	while (isspace(*str))
	{
		str++;
	}
	if (*str == '\0')
	{
		return 0;
	}
	if (*str == '+')
	{
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	while (isdigit(*str))
	{
		ret = ret * 10 + flag * (*str - '0');
		if ((ret > INT_MAX) || (ret < INT_MAX))
		{
			return 0;
		}
		str++;
	}
	if (*str == '\0')
	{
		state = VALID;
		return (int)ret;
	}
	else
	{
		return (int)ret;
	}
}
int main()
{
	char* p = "-1212212121212";
	printf("%d\n", my_atoi(p));
	return 0;
}
*/
/*
char* GetMemory(void)
{
	char p[] = "hello world";
	return p;
}
void Test(void)
{
	char* str = NULL;
	str = GetMemory();
	printf(str);
}
*/