#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("a = %d b = %d\n", a, b); //11 11
//	//int b = a++;
//	//printf("a = %d b = %d\n", a, b); //11 10
//	//int b = a--;//后置--；先使用a的值，再--
//	//printf("a = %d b = %d\n", a, b); //9 10
//	//int b = --a;//前置--；先--，再使用a的值
//	//printf("a = %d b = %d\n", a, b);//9 9
//	return 0;
//}
//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;//强制将3.14转换成整型  
//
//	return 0;
//}

/*typedef unsigned int u_int;*///类型重命名

//int main()
//{
//	//int a = 10;//局部变量-auto变量
//	//unsigned int age;//无符号整型
//	u_int age;//与上一句一个意思
//	return 0;
//}

//int main()
//{
//	register int a = 0;//假设a未来会被频繁大量的使用
//	//register就是建议把a放在寄存器中
//}

//static的作用
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

//static修饰局部变量，改变了变量的生命周期，生命周期变长了
//出了局部范围也不销毁
//void test()
//{
//	static int a = 1;//局部变量
//	a++;
//	printf("%d ", a);//2 3 4 5 6 7 8 9 10 11,不加static为2 2 2 2 2 2 2 2 2 2
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//static修饰全局变量
//extern是声明外部符号的
//extern int g_val;
//int main()
//{
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//声明函数
 /*
extern int Add(int x, int y);
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}*/

//#define 定义宏
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的方式
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//宏的方式
 /*
#define MAX(X,Y) ((X)>(Y)?(X):(Y))
int main()
{
	int a = 10;
	int b = 20;
	int max = MAX(a, b);
	printf("max = %d\n", max);
	return 0;
}*/

//指针
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);//005CF7A8
//	printf("%p", p); //005CF7A8
//	return 0;
//}
//
//int main()
//{
//	char ch = 'a';
//	int a = 10;
//	char* pc = &ch;
//	//*pc;//解引用操作符，*pc就是a
//	int* pa = &a;
//	//*pc = 'w';
//	//printf("%c\n",ch);
//	printf("%d\n", sizeof(pc));//4   win32指针都是四个字节，64位平台是8个字节
//	printf("%d\n", sizeof(pa));//4
//	return 0;
//}

//
//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(long double));//8
//	return 0;
//}

int sum(int a)
{
    int c = 0;
    static int b = 3;
    c += 1;
    b += 2;
    return (a + b + c);
}
int main()
{
    int i;
    int a = 2;
    for (i = 0; i < 5; i++)
    {
        printf("%d,", sum(a));
    }
}