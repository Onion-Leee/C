#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//sizeof(������) - ��������ʾ���������-���������������Ĵ�С
//&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ
//����֮�⣬���е�����������������Ԫ�صĵ�ַ
//
//
int main()
{
	int a[] = { 1,2,3,4 };//4*4=16
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a + 0));//4/8 -- a+0�ǵ�һ��Ԫ�صĵ�ַ����仰�Ǽ���ĵ�ַ�Ĵ�С
	printf("%d\n", sizeof(*a));//4 -- *a������ĵ�һ��Ԫ�أ��������ǵ�һ��Ԫ�صĴ�С
	printf("%d\n", sizeof(a + 1));//4/8
	printf("%d\n", sizeof(a[1]));//4 -- �������ǵڶ���Ԫ�صĴ�С

	printf("%d\n", sizeof(&a));//4/8 -- &a��Ȼ������ĵ�ַ������sizeof(&a)�������һ����ַ�Ĵ�С
	printf("%d\n", sizeof(* &a));//16 -- �����������Ĵ�С��ȡ��ַ���ֽ������൱�ڵ����ˣ�
	//&a -- int(*p)[4] = &a;
	printf("%d\n", sizeof(&a + 1));//4/8 - ��������������Ŀռ�Ĵ�С
	printf("%d\n", sizeof(&a[0]));//4/8
	printf("%d\n", sizeof(&a[0] + 1));//4/8

	//�ַ�����
	char arr[] = { 'a','b','c','d','e','f' };

	printf("%d\n", strlen(arr));//���ֵ����֪��f�����'\0'��ʲôλ�ã�
	printf("%d\n", strlen(arr + 0));//���ֵ
	printf("%d\n", strlen(*arr));//error �ַ�a�ĵ�ַ ��Ҳ����ASCIIΪ97�ĵ�ַ����97������һ����ַ
	printf("%d\n", strlen(arr[1]));//error
	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ - 6
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ - 1

	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4/8���ַ��ĵ�ַҲ�ǵ�ַ�����Ҳ���ĸ����߰˸��ֽڣ�
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8
	printf("%d\n", sizeof(&arr + 1));//4/8��������һ�����飩
	printf("%d\n", sizeof(&arr[0] + 1));//4/8



	char arr[] = "abcdef";//sizeof�Ĵ�С������'\0'
	//[a b c d e f \0]
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//error
	//printf("%d\n", strlen(arr[1]));//error
	printf("%d\n", strlen(&arr));//6
	printf("%d\n", strlen(&arr + 1));//���ֵ
	printf("%d\n", strlen(&arr[0] + 1));//5


	//[a b c d e f \0] //sizeof�Ĵ�С������'\0'
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr + 0));//4/8
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4/8��ȡ��������������ĵ�ַ�������ǵ�ַ��
	printf("%d\n", sizeof(&arr + 1));//4/8
	printf("%d\n", sizeof(&arr[0] + 1));//4/8

	char* p = "abcdef";

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//error
	printf("%d\n", strlen(p[0]));//error
	printf("%d\n", strlen(&p));//���ֵ -- ��Ϊ��a�ĵ�ַ��ʼ����������֪����ַ��ʲô���ģ�Ҳ��֪�������Ƿ���'\0',���������ֵ��
	printf("%d\n", strlen(&p + 1));//���ֵ
	printf("%d\n", strlen(&p[0] + 1));//5


	printf("%d\n", sizeof(p));//4/8 -- ��Ȼpֻ�Ǹ��ַ�ָ�룬��Ҳ�Ǹ�ָ��
	printf("%d\n", sizeof(p + 1));//4/8 -- �ǵ�ַ���Ĵ�С����4/8
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//1
	printf("%d\n", sizeof(&p));//4/8
	printf("%d\n", sizeof(&p + 1));//4/8
	printf("%d\n", sizeof(&p[0] + 1));//4/8

	return 0;
}