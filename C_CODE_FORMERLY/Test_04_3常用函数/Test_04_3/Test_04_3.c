#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//���ú���
//strlen strcat strcmp scrcpy//
//1 strlen �󳤶�
//void main() 
//{
//	int a = 8;
//	char* str = "Hello"; // ĩβĬ���� \0��\0���ַ����Ľ�����
//	int len = strlen(str);
//	printf("str len = %d\n", len);
////  printf("str len = %d\n",strlen(str));
//}
//

//2. strcat ���Ӻ�strcpy ����
//void main()
//{
//	char* str = "Hello";
//	printf("len = %d\n", strlen(str));
//	char s1[20] = "Hello";
//	char s2[] = "Bit";
//	printf("s1 = %s\n", s1);
//	strcat(s1, s2); //s1+s2= Hello Bit
//	printf("s1 = %s\n", s1);
//	strcpy(s1, s2);  //��s2������s1
//	printf("s1 = %s\n", s1);
//	
//}

//3.strcmp �Ƚ�
//void main()
//{
//	char* s1 = "aello";
//	char* s2 = "hello";
//	printf("result = %d\n", strcmp(s1, s2));
//	//s1 > s2 :1
//	//s1 = s2 :0
//	//s1 < s2 :-1
//}

// ����
void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void main()
{
	int a = 10;
	int b = 20;
	printf("a = %d,b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d,b = %d\n", a, b);
}



