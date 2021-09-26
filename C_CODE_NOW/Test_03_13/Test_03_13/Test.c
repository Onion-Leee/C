#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
int main()
{
	//常量
	//1.字面变量
	//2.const修饰的常变量
	//const int num = 10;  //有const修饰意味着后面的num不会改变
	//num = 20;
	//printf("num = %d\n", num);
	//*********************************
	//3.#define 定义的标识符常量
	//#define MAX = 1000  下面的MAX值不得改变
	//4.枚举常量（将所有取值一一列举）
	//创建一个性别枚举类型
	enum Sex
	{
		//枚举常量
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
	printf("%d\n", strlen(arr1));//计算字符串长度
	printf("%d\n", strlen(arr2));
	return 0;
}
*/

//int main()
//{
	//
	//转义字符
	//\t是水平制表符
	//printf("c:\test\32\test.c\n"); 
	//printf("c:\\test\\32\\test.c\n"); c:\test\32\test.c
	//printf("c:test\32\test.c\n"); 
	//printf("%c", '\'');//不能直接打印‘   
	//printf("\a\a\a");//蜂鸣声
	//%c 打印字符
	//%d 打印整型
	//%s 打印字符串
	//%f 打印浮点型
	//%p  打印地址
	//printf("%d\n", strlen("c:\test\32\test.c"));//13
	//printf("%c\n", '\32');//把八进制的32转换成十进制数后，这个数作为ASCII值代表的那个字符
	//printf("%c\n", '\x41');//4*16^1+1*16^0 = 65 所对应的ASCII所对应的字符
	//return 0;
//}
 /*
int main()
{
	int input = 0;
	printf("加入比特\n");
	printf("你要好好学习吗？（1/0）？\n");
	scanf("%d", &input);
	if (input == 1)
		printf("好Offer\n");
	else
		printf("卖红薯\n");
}*/
//int main()
//{
//	int a = 3; //创建变量-初始化
//	a = 10; //赋值操作
//	int b = 5;
//	int c = a & b;
//	//a&b;按位与  有一个是0全是0
//	//a|b;按位或  有一个是1就是1
//	//a^b;按位异或  相同时为0，不同时为1
//}
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));  //40
	printf("%d\n", arr[10]);
	return 0;
}