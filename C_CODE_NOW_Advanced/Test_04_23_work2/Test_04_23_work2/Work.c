#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<assert.h>

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����


//�ַ�������
//���ַ�ʽ  1������   2�� strnapy  strncat  3��reverse
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
//��дһ�������ҳ�������ֻ����һ�ε�����
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
//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��

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
//дһ���꣬���Խ�һ�������ֵ�����λ��ż��λ������
#define swap(n) (((n)&((0x55555555)<<1)) | ((n)&((0xaaaaaaaa)>>1)))
void main()
{
	//0000 0100 0111 0111 0010 0110 0010 1011

	//size_t value = 74917491;
	size_t value = 1223456;
	printf("%d\n", swap(value));
}
*/