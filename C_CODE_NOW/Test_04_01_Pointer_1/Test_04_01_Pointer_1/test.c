#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
//��������ҵ
//дһ���������ز��������ƣ����룩�� 1 �ĸ�����
int Count(int a)
{
	int c = 0;
	while (a)
	{
		a = a & (a - 1);
		c++;
	}
	return c;
}
int Count1(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}
int Count2(int n)
{
	int count2 = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count2++;
		}
	}
	return count2;
}
int main()
{
	int a = 0;
	while (1)
	{
		printf("please input a num:\n");
		scanf("%d", &a);
		int ret = Count2(a);
		printf("count = %d\n", ret);
	}
	return 0;
}
*/
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int count = 0;
//	int c = a ^ b;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//��ӡ���������Ƶ�����λ��ż��λ

//int main()
//{
//	int a = 0;
//	while (1)
//	{
//		printf("please input a num:\n");
//		scanf("%d", &a);
//		int arr[32] = { 0 };
//		int i = 0;
//		for (i = 0; i < 32; ++i)
//		{
//			arr[i] = a % 2;
//			a = a / 2;
//		}
//		printf("ż����\n");
//		for (i = 31; i >= 0; i = i - 2)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("\n������\n");
//		for (i = 30; i >= 0; i = i - 2)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	//��ӡ����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	//��ӡż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	return 0;
//}






/*
//ָ��
int main()
{
	int a = 0x11223344;
	//ָ���������������
	//1.ָ�����;�����ָ����н����ò����ܷ��ʶ��ռ�
	//char *ָ�룬�����ò���������һ���ֽ�    int*ָ������÷���4���ֽ�
	//2.ָ�����;�����ָ��+1�����������ֽڣ���һ�����߶����룩
	//char*ָ��+1�������1���ֽ�
	//int*ָ��+1�������4���ֽ�
	return 0;
}
*/
/*
int main()
{
	int a = 0;//�������ʼ���Ļ����ֲ�����- ���ֵ
	int* p;//Ұָ��
	return 0;
}
*/
/*
int main()
{
	int a = 10;
	int* p = &a; //��ʼ��
	int* p3 = NULL;//��֪����p2ָ������
	//ʹ��p������a
	p = NULL;
	if (p != NULL)
	{
		*p = 0;
	}
	return 0;
}
*/

/*
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	char ch[5] = { 0 };
	printf("%d\n", &arr[9] - &arr[0]); //��ַ - ��ַ -->ָ�� - ָ��
	//ָ�� - ָ�� �ľ���ֵ �� �����ָ���ָ��֮��Ԫ�صĸ���
	//ǰ�� ������ָ��ָ��ͬһ��ռ�
	return 0;
}
*/

/*
//my_strlen��ʵ��  1.������  2.�ݹ�  3.ָ��-ָ��
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	int len = my_strlen("abc");
	printf("%d\n", len);
	return 0;
}
*/

/*
int main()
{
	int arr[10] = { 0 };
	//��������������Ԫ�صĵ�ַ
	//��������
	//1.sizeof(������)�����������������ʾ�������飬sizeof�������������������������Ĵ�С
	//2.&������ �����������������ʾ�������飬&������  ȡ��������������ĵ�ַ
	printf("%p\n", arr); //008FF768
	printf("%p\n", arr+1); //008FF76C
	printf("%p\n", &arr[0]);//008FF768
	printf("%p\n", &arr[0]+1);//008FF76C
	printf("%p\n", &arr);//����ָ������ 008FF768
	printf("%p\n", &arr+1);//008FF790  //���������ʮ�����Ƶ�28��Ҳ�͵���10���Ƶ�40
	return 0;
}
*/

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < 10; i++)
	//{
	//	//printf("%d ", i[arr]);
	//	printf("%d ", arr[i]); //arr[i] ==> *(arr+i)
	//}
	//�������ͨ��ָ��������
	for (i = 0; i < sz; ++i)
	{
		//printf("%p --- %p\n", p + i, &arr[i]);
		*(p + i) = i + 1;
	}
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", *(p + i)); //*(arr+i)  arr[i]  p[i]
	//	//printf("%d ", p[i]);  //i[p] == *(i+p) == *(p+i) == p[i]
	//	//printf("%d ", i[p]);  //arr[i]
	//}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}