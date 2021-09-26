#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include"Max.h"
//#include"Min.h"

 //#define OK 条件编译
// #ifndef   与下面这个#ifdef相反
/*#ifdef OK*/   //如果前面定义了OK，则执行第一个fun，否则执行第二个fun
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


//递归
//1.求阶乘 方法一：
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

//求阶乘 方法二
/*
int Factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * Factorial(n - 1);  //自己调动自己就是递归
}
void main()
{
    int n;
    printf("please input n:");
    scanf("%d", &n);
    int result = Factorial(n);
    printf("result = %d\n", result);
}*/

//2.输入1234 输出1 2 3 4


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

//3.编写函数，求字符串的长度
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

//4.斐波那契（Fibonacci）函数  后面一项是前两项之和  第一二项都是1
// 1 1 2 3 5 8 ......
//方法一：递归，如果是1000的话就会很难运行出结果
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
        printf("第 %d 项的值为: %d\n", n, result);
    }
}*/

//方法二：非递归，如果递归求数据过大的话就要改成非递归得到方法
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
        printf("第 %d 项的值为: %u\n", n, result);
    }
}*/

//静态变量
 /*
int fun(int x)
{
    //static int i = 0; //记忆性
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

//宏定义
#define ADD(a,b) ((a)+(b))  //每一个参数和每一个结果都要加括号
void main()
{
    int result = ADD(1, 2);  //相当于int result = 1 + 2;
    printf("result = %d\n", result);
}