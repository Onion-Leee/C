#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//自己创建的类型-自定义类型
//创建一个书的类型
struct Book
{
	//描述书的细节信息
	char name[30];//书名
	double price; //定价
	char id[30]; //书号—ISBN-26164164
};
//结构体变量.成员名
//结构体指针->成员名
int main()
{
	//定义一本书
	struct Book b1 = { "射雕英雄传",55.62,"ISBN-26164164" };
	//struct Book b2 = { "C语言程序设计",53.62,"ISBN-26164165" };
	//创建了一个结构体指针
	struct Book* ps = &b1;
    //两种写法完全等价
	printf("书名:%s\n",(*ps).name);
	printf("书名:%s\n",ps->name);

	//打印
	//printf("书名:%s\n", b1.name);
	//printf("定价:%lf\n", b1.price);
	//printf("书号:%s\n", b1.id);
	return 0;
}




/*
int main()
{
	int a = 10;
	//printf("%p\n", &a);
	printf("a = %d\n", a);
	int* p = &a;
	*p  = 20;//*-解引用操作
	printf("a = %d\n", a);
	return 0;
}
*/