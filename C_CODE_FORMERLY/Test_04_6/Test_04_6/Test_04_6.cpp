#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include"Max.h"
//#include"Min.h"

 //#define OK ��������
// #ifndef   ���������#ifdef�෴
/*#ifdef OK*/   //���ǰ�涨����OK����ִ�е�һ��fun������ִ�еڶ���fun
 /*void fun()
{
    printf("This is fun1.\n");
}
#else
void fun()
{
    printf("This is fun2.\n");
}*/
/*#endif*/ // OK
 /*void main()
{
    int a = 10;
    int b = 20;
    int max_value = Max(a, b);
    printf("max value = %d\n", max_value);
    int min_value = Min(a, b);
    printf("min value = %d\n", min_value);
    fun();
    compare(a, b);
}*/


//�ݹ�
//1.��׳� ����һ��
/*
int Factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; ++i)
    {
        result = result * i;
    }
    return result;
}
void main()
{
    int n;
    printf("please input n:");
    scanf("%d", &n);
    int result = Factorial(n);
    printf("result = %d\n", result);
}*/

//��׳� ������
/*
int Factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * Factorial(n - 1);  //�Լ������Լ����ǵݹ�
}
void main()
{
    int n;
    printf("please input n:");
    scanf("%d", &n);
    int result = Factorial(n);
    printf("result = %d\n", result);
}*/

//2.����1234 ���1 2 3 4


 /*
void print(int n)
{

    if (n > 9)
    {
        print(n / 10);
    }
    printf("%d ", n % 10);
}
int main()
{
    int num = 1234;
    print(num);
    return 0;
}*/

//3.��д���������ַ����ĳ���
 /*
size_t My_Strlen(const char *string)
{
    size_t count = 0;
    while (*string != '\0')
    
    {
        count++;
        string++;
    }
        return  count;
}

void main()
{
    const char *str = "Hello";
    printf("len = %d\n", My_Strlen(str));
} */

 /*
size_t My_Strlen(const char* string)
{
    if (*string == '\0')
        return 0;
    else
        return My_Strlen(string + 1) + 1;
}
void main()
{
    const char* str = "Hello";
    printf("len = %d\n", My_Strlen(str));
}*/

//4.쳲�������Fibonacci������  ����һ����ǰ����֮��  ��һ�����1
// 1 1 2 3 5 8 ......
//����һ���ݹ飬�����1000�Ļ��ͻ�������г����
 /*
int Fib(int n)
{
    if (n == 1|| n == 2)
        return 1;
    else
        return Fib(n - 1) + Fib(n - 2);
}

void main()
{
    int n;
    while (1)
    {
        printf("input n:");
        scanf("%d", &n);
        int result = Fib(n);
        printf("�� %d ���ֵΪ: %d\n", n, result);
    }
}*/

//���������ǵݹ飬����ݹ������ݹ���Ļ���Ҫ�ĳɷǵݹ�õ�����
 /*
int Fib(int n)
{
    if (n <= 2)
        return 1;
    int fib,fib1, fib2;
    fib1 = fib2 = 1;
    int i = 3;
    while (i <=n)
    {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
        i++;
    }
    return fib;
}

void main()
{
    int n;
    while (1)
    {
        printf("input n:");
        scanf("%d", &n);
        int result = Fib(n);
        printf("�� %d ���ֵΪ: %u\n", n, result);
    }
}*/

//��̬����
 /*
int fun(int x)
{
    //static int i = 0; //������
    int i = 0;
    i += x;
    return i;
}

void main()
{
    printf("%d\n", fun(5)); //5  5
    printf("%d\n", fun(5)); //10 5  
    printf("%d\n", fun(5)); //15 5
}*/

//�궨��
#define ADD(a,b) ((a)+(b))  //ÿһ��������ÿһ�������Ҫ������
void main()
{
    int result = ADD(1, 2);  //�൱��int result = 1 + 2;
    printf("result = %d\n", result);
}