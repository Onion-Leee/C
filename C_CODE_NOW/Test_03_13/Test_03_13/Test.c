#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
int main()
{
	//����
	//1.�������
	//2.const���εĳ�����
	//const int num = 10;  //��const������ζ�ź����num����ı�
	//num = 20;
	//printf("num = %d\n", num);
	//*********************************
	//3.#define ����ı�ʶ������
	//#define MAX = 1000  �����MAXֵ���øı�
	//4.ö�ٳ�����������ȡֵһһ�о٣�
	//����һ���Ա�ö������
	enum Sex
	{
		//ö�ٳ���
		MALE,
		FEMALE,
		SECERT

	};
	int num = 10;
	enum Sex s = MALE;
	printf("%d\n", MALE);
	return 0;
}
*/
/*
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};
	//char arr2[] = { 'a','b','c',0};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));//�����ַ�������
	printf("%d\n", strlen(arr2));
	return 0;
}
*/

//int main()
//{
	//
	//ת���ַ�
	//\t��ˮƽ�Ʊ��
	//printf("c:\test\32\test.c\n"); 
	//printf("c:\\test\\32\\test.c\n"); c:\test\32\test.c
	//printf("c:test\32\test.c\n"); 
	//printf("%c", '\'');//����ֱ�Ӵ�ӡ��   
	//printf("\a\a\a");//������
	//%c ��ӡ�ַ�
	//%d ��ӡ����
	//%s ��ӡ�ַ���
	//%f ��ӡ������
	//%p  ��ӡ��ַ
	//printf("%d\n", strlen("c:\test\32\test.c"));//13
	//printf("%c\n", '\32');//�Ѱ˽��Ƶ�32ת����ʮ���������������ΪASCIIֵ������Ǹ��ַ�
	//printf("%c\n", '\x41');//4*16^1+1*16^0 = 65 ����Ӧ��ASCII����Ӧ���ַ�
	//return 0;
//}
 /*
int main()
{
	int input = 0;
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ�𣿣�1/0����\n");
	scanf("%d", &input);
	if (input == 1)
		printf("��Offer\n");
	else
		printf("������\n");
}*/
//int main()
//{
//	int a = 3; //��������-��ʼ��
//	a = 10; //��ֵ����
//	int b = 5;
//	int c = a & b;
//	//a&b;��λ��  ��һ����0ȫ��0
//	//a|b;��λ��  ��һ����1����1
//	//a^b;��λ���  ��ͬʱΪ0����ͬʱΪ1
//}
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));  //40
	printf("%d\n", arr[10]);
	return 0;
}