#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1.��������ʱ������������������
/*
int main()
{
	int a = 2;
	int b = 3;
	printf("Before: a = %d,b = %d\n", a, b);
	// a = a + b;
	// b = a - b;
	// a = a - b;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("After: a = %d,b = %d\n", a, b);
	return 0;
}
*/

//2.��һ�������ڴ洢�ж�������1�ĸ�����Ч�ʾ����ܵĸߡ�
/*
int count(value)
{
	int count = 0;
	while (value)
	{
		//1.
		//if (value % 2 == 1)
		//	count++;
		//value /= 2;
		//2.
		//if (value % 2 == 1)
		//	count++;
		//value >>= 1;//��λЧ�ʻ����
		//3.
		//value = value & (value - 1);
		//count++;
		//4.
		if (value & 0x01)
			count++;
		value >>= 1;
	}
	return count;
}

void main()
{
	char value = 15;
	int result = count(value);
	printf("count = %d\n", result);
}

//3.�������ı߽�ֵ
#define ALIGN 4
int fun(int n)   //�������ı߽�ֵ
{
	return ((n + ALIGN - 1) & ~(ALIGN - 1));
}
void main()
{
	int n;
	int result;
	while (1)
	{
		printf("please input n:>");
		scanf("%d", &n);
		result = fun(n);
		printf("result = %d\n", result);
	}
}



int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++; //i = 0 && 3 && 4,���룬ֻҪ��һ��0����0��b��d���������㣬��������һ��a+1
	i = a++||++b||d++;
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	// 1  2  3  4
	// 1  3  3  4
	return 0;
}
//��������Ľ����ʲô��
*/

/*
#include<stdio.h>
int Max(int x, int y)
{
	return x > y ? x : y;
}
int main()
{
	int a = 0;
	int b = 0;
	while (1)
	{
		printf("please input two number:");
		scanf("%d %d", &a, &b);
		int max_num = Max(a, b);
		printf("max = %d\n", max_num);
	}
	return 0;
}

int main()
{
	printf("\11");
	return 0;
}
*/

void main()
{
	int item;
	printf("input item(����-1ʱ����):");
	/*scanf("%d", &item);
	while (item != -1)
	{
		printf("item = %d\n", item);
		printf("input num(����-1ʱ����):");
		scanf("%d", &item);
	}*/
	while (scanf("%d", &item), item != -1)
	{
		printf("item = %d\n", item);
	}
}