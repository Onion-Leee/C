#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
struct Stu
{
	char name[20];
	char id[18];
	short age;
	char sex[5];
}s2，s3，s4; //s2，s3，s4就是创建的结构体变量 - 全局变量

int main()
{
	//这里的s1是局部变量
	struct Stu s1;//学生对象是s1
	struct Stu s2;//学生对象是s2
	return 0;
}
*/
//typedef - 类型定义 - 类型重定义
//单引号是字符（char c;）    双引号是字符串(char arr[];)
//结构体变量.成员名
//结构体指针->成员名
/*
struct Stu 
{
	int n;
	char c[20];
	char arr[20];
};
void Print(struct Stu* ps)
{
	printf("%d\t%s\t%s\t", (*ps).n, (*ps).c, (*ps).arr);
	printf("%d\t%s\t%s\t", ps->n, ps->c, ps->arr);
}
int main()
{
	struct Stu s = { 10,"张三","I am a student!" };
	Print(&s);
	return 0;
}
*/

//char short int long float double - 内置类型
//学生:名字+学号+年龄+性别
//书
//复杂对象-复杂类型
//C语言提供了一个：struct - 结构体关键字
//
//学生的类型
/*
struct Stu
{
	//描述学生的相关属性
	char name[20];
	char id[18];
	short age;
	char sex[5];
}s2,s3,s4;//s2,s3,s4 就是创建的结构体变量-全局变量

int main()
{
	//s1是局部变量
	struct Stu s1;//学生对象s1

	return 0;
}
*/
/*
struct S
{
	int a;
	char c;
	char arr[10];
	double d;
};

typedef struct T
{
	char buf[20];
	struct S s;
	int *p;
}T;

//typedef - 类型定义- 类型重定义

int main()
{
	int a = 10;
	//struct S s = {100, 'w', "bit", 3.14};
	//
	//结构体变量.成员名
	//结构体指针->成员名
	//
	T st = { "hello bit", {1000, 'b', "abcdef", 4.4}, &a};
	T* pt = &st;
	printf("%s\n", pt->buf);
	printf("%lf\n", pt->s.d);

	//printf("%s\n", st.buf);
	//printf("%d\n", st.s.a);
	//printf("%c\n", st.s.c);
	//printf("%s\n", st.s.arr);
	//printf("%lf\n", st.s.d);
	//printf("%d\n", *(st.p));

	//struct T st2;

	return 0;
}
*/
struct Stu
{
	//描述学生的相关属性
	char name[20];
	char id[18];
	short age;
	char sex[5];
};//s2,s3,s4 就是创建的结构体变量-全局变量

void print1(struct Stu tmp)
{
	printf("%s\t%s\t%d\t%s\n", tmp.name, tmp.id, tmp.age, tmp.sex);
}

void print2(struct Stu* ps)
{
	printf("%s\t%s\t%d\t%s\n", ps->name, ps->id, ps->age, ps->sex);
}

int main()
{
	struct Stu s = {"张三", "2019010305", 20, "男"};
	print1(s);
	print2(&s);

	return 0;
}