#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//xxxx 类型 = xxxx
//指针 == 地址（空间的编号而已，唯一对应一个内存的空间）
//指针有两个值 1.自身的值 2.所指向的值
//void main()
//{
//	int a = 10;
//	//int *pi;//定义了一个整型指针
//	//int *p = &a; //指针变量 == 指针 == 地址,指针p存储的是变量的地址
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