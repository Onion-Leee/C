#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<assert.h>

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。


//字符串左旋
//三种方式  1、如下   2、 strnapy  strncat  3、reverse
void LeftRound(char* str, int n)
{
	assert(str != NULL);
	int len = strlen(str);
	int step = n % len;
	while (step-- != 0)
	{
		char tmp = str[0];
		for (int i = 0; i < len - 1; ++i)
		{
			str[i] = str[i + 1];
		}
		str[len - 1] = tmp;
	}
}

void main()
{
	char str[] = "ABCDEFGHIJK";
	int n = 2;
	LeftRound(str, n);
	printf("str = %s\n", str);
}



/*
//编写一个函数找出这两个只出现一次的数字
int FindNumber(int ar[], int n)
{
	int res = 0;
	for (int i = 0; i < n; ++i)
	{
		res ^= ar[i];
	}
	return res;
}
void main()
{
	int ar[] = { 1,2,4,3,7,7,3,2,1 };
	int n = sizeof(ar) / sizeof(ar[0]);
	printf("value = %d\n", FindNumber(ar, n));
}
/*
*/
/*
//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明

typedef struct Test
{
	int a;
	char b;
	double c;
}Test;
#define offset()
void main()
{
	printf("offset = %d\n", offset(Structure,Test.a));
}
*/
/*
//写一个宏，可以将一个整数字的奇数位和偶数位交换。
#define swap(n) (((n)&((0x55555555)<<1)) | ((n)&((0xaaaaaaaa)>>1)))
void main()
{
	//0000 0100 0111 0111 0010 0110 0010 1011

	//size_t value = 74917491;
	size_t value = 1223456;
	printf("%d\n", swap(value));
}
*/