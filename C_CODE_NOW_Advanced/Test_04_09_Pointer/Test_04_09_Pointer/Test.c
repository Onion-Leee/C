#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main()
{
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	char* str3 = "hello bit.";
	char* str4 = "hello bit.";
	if (str1 == str2) //�Ƚϵ��ǵ�ַ
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");
	if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");
	return 0;
}
*/
/*
void main()
{
	char* str = "Hello bit.";
	printf("%s\n", str);

	printf("str = %d\n", sizeof(str));  //ָ������Ĵ�С 4   ǿ������ָ��
	char str1[] = "Hello bit.";
	printf("%s\n", str1);
	printf("str1 = %d\n", sizeof(str1)); // 11
}
*/

/*
//ָ��͵ȼ��ڵ�ַ
void main()
{
	char ch = 'A';  //xxx���� = xxxָ��
	//ָ������
	int a = 1;
	int b = 2;
	int c = 3;
	int* ar[3] = { &a,&b,&c };
	//����ָ��
	int br[3] = { 10,20,30 };
	int(*par)[3] = &br;
	int i = 10;
}
*/
/*
void main()
{
	int ar[10];//δ��ʼ��
	int ar[10] = { 1,2,3,4,5,6,7,8,9,10 };//��ȫ��ʼ��
	int br[10] = { 1,2,3,4,5 };//δ��ȫ��ʼ��
	int dr[100] = { 0 };
	int er[10];
	for (int i = 0; i <= 5; i++)
	{
		er[i - 1] = i;//��ֵ
	}
}
*/
/*
void main()
{
	int ar[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("ar size = %d\n", sizeof(ar));
	printf("0x%p\n", &ar[0]);
	printf("0x%p\n",ar);
	printf("0x%p\n",&ar);
}
*/