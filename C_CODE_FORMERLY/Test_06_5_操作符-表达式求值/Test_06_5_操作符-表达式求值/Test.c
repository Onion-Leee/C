#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fun()
{
	static int count = 1;
	return ++count;
}
int main()
{
	int answer;
    //从左往右
	answer = fun() - fun() * fun();
	printf("%d\n", answer);//输出多少？
	return 0;
}
////代码5
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}

/*
void main()
{
	int i = 0;
	printf("%d %d %d %d\n", i++, ++i, i++, ++i);//3 4 1 4,从右往左运算
	//在VC6.0上是 2 2 1 1
	printf("i = %d\n", i);  //4
}

void main()
{
	float f = 12.34f; //需要加f
	printf("%f\n", f);

	int val = f;//隐式转换
	//int val = (int)f;//显式转换
	printf("val = %d\n", val);
}


//c只要参与表达式运算,就会发生整形提升,表达式 +c ,就会发生提升
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(-c));//4
	printf("%u\n", sizeof(!c));//1
	return 0;
}

int main()
{
	char a = 0xb6;//得到的并不是182，而是-74
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)//-74不等于b6
		printf("a");
	if (b == 0xb600)//不等
		printf("b");
	if (c == 0xb6000000)//相等
		printf("c");
	return 0;
}
*/