#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���غ�
#define DISPLAY
void main()
{
#ifdef DISPLAY
	printf("test.\n");
#endif 
}
/*
//#ͬ��ȡ���������ʵֵ
#define ADD(a,b) a+b
#define MUL(a,b) a*b
#define PRINT(x) printf(#x "x" #x "= %d\n",x*x);
//���з�
#define BIT_STRUCT(name) \
struct Bit_##name\
{\
int a;\
int b;\
char name[10];\
}
BIT_STRUCT(sgq); //��ʾ��������ṹ��
void main()
{

	PRINT(5);
	printf("add = %d\n", ADD(2, 3));
	printf("mul = %d\n", MUL(2, 3));
}
*/
/*
void main()
{
	printf("file = %d\n", __FILE__);
	printf("line = %d\n", __LINE__);
	printf("date = %d\n", __DATE__);
	printf("time = %d\n", __TIME__);

}
*/