#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//xxxx ���� = xxxx
//ָ�� == ��ַ���ռ�ı�Ŷ��ѣ�Ψһ��Ӧһ���ڴ�Ŀռ䣩
//ָ��������ֵ 1.�����ֵ 2.��ָ���ֵ
//void main()
//{
//	int a = 10;
//	//int *pi;//������һ������ָ��
//	//int *p = &a; //ָ����� == ָ�� == ��ַ,ָ��p�洢���Ǳ����ĵ�ַ
//	int b = 20;
//}
void main()
{
    int a = 10;
    int b = 20;
    int* p = NULL;
    int** s = NULL;
    p = &a;
    s = &p;
    *p = 100;
    *s = &b;
}