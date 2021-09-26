#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
int main()
{
	//移位操作符
	//>>  - 右移操作符
	//<< -  左移操作符
	//移动的是二进制位

	//整数 - 二进制的表现形式有三种：原码，反码，补码
	//内存中存储这个整数的时候，存储的是补码
	//正整数：原码，反码，补码，相同
	//负整数：直接写的二进制序列就是原码，原码的符号位不变，其他为按位取反得到的就是反码，反码+1,得到的就是补码

	//有两种右移方式
	//a.算数右移：右边丢弃，左边补原符号位
	//b.逻辑右移：右边丢弃，左边补0

	int a = 14;
	//14是正整数--四个字节--32bit位
	int a = -1;
	//1000 0000 0000 0000 0000 0000 0000 0001--原码
	//1111 1111 1111 1111 1111 1111 1111 1110--反码
	//1111 1111 1111 1111 1111 1111 1111 1111--补码

	return 0;
}
*/
/*
int main()
{
	int a = 14;
	//14是正整数--四个字节--32bit位
	//0000 0000 0000 0000 0000 0000 0000 1110
	int b = a >> 1;
	printf("b = %d\n", b);
	return 0;
}

int main()
{
	int a = -1;
	//1000 0000 0000 0000 0000 0000 0000 0001--原码
	//1111 1111 1111 1111 1111 1111 1111 1110--反码
	//1111 1111 1111 1111 1111 1111 1111 1111--补码
	int b = a >> 1;
	printf("b = %d\n", b);  //算术右移  等于 -1
	return 0;
}
*/



/*
//左移
int main()
{
	int a = 5;
	int b = a << 1;
	printf("%d\n", b); //10
	return 0;
}
*/

/*
int main()
{
	int a = 3;
	int b = 5;
	//int c = a && b;  //按位与（二进制位）  两个为1才是1
	//printf("c = %d\n", c);
	//int c = a || b;  //按位与（二进制位）  两个为0才是0，有1就是1
	//printf("c = %d\n", c);
	int c = a ^ b;  //按位异或
	//异或的计算方式：相同为0，相异为1
	printf("c = %d\n", c); //6
	return 0;
}
*/

/*
int main()
{
	int a = 5;
	int b = 3;
	//把两个整数进行交换
	int c = 0;
	printf("a = %d b = %d\n", a, b);
	//c = a;
	//a = b;
	//b = c;
	//不创建临时变量
	//1.这种算法容易溢出
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//2异或
	//不创建临时变量，把两个整数进行交换（可读性比较差）
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d b = %d\n", a, b);
	return 0;

}
*/
/*
int main()
{
	2 + 3; //+ 有两个操作数 - 双目操作符
	return 0;
}


int main()
{
	int flag = 0;
	//if (flag)
	//{
	//	printf("hehe\n");
	//}
	if (!flag)
	{
		//	如果flag为假进来
		printf("hehe\n");
	}
	return 0;
}
*/
/*
int main()
{
	int a = 10;
	short s = 5;
	printf("%d\n", sizeof(s = a + 3)); //2
	printf("%d\n", s);//5
	return 0;
}
*/
/*
int main()
{
	int a = 0;
	printf("%d", ~a);
	//0000 0000 0000 0000 0000 0000 0000 0000 - 补码
	//取反
	//1111 1111 1111 1111 1111 1111 1111 1111 - 补码
	//1111 1111 1111 1111 1111 1111 1111 1110 - 反码
	//1000 0000 0000 0000 0000 0000 0000 0001 - 原码

	return 0;
}
*/
/*
int main()
{
	int a = 13;
	a = a | (1 << 4);
	printf("%d\n", a);
	a &= (~(1 << 4));
	printf("%d\n", a);
	return 0;
}
*/
/*
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//(3) 4
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//(4) 4  传过来是指针
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//(1)40
	printf("%d\n", sizeof(ch));//(2)10
	test1(arr);
	test2(ch);
	return 0;
}
*/

/*
int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;  //2 3 3 5
	i = a++||++b||d++;//2 2 3 4
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	return 0;
}
*/

/*
//结构体
//复杂对象 - 描述 - 复杂类型
//学生：名字+电话+性别+年龄
#include<string.h>
struct Stu
{
	char name[20];
	int age;
	char tele[12];
	char sex[5];
};
int main()
{
	struct Stu s = { "张三",20,"15212345678","男" };//s是一个结构体变量
	//结构体变量.成员名   -> 结构体指针->成员名
	//strcpy(s.name, "zhangsan");
	//printf("%s\n", s.name);
	struct Stu* ps = &s;
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	return 0;
}
*/

/*
//整型提升的过程
int main()
{
	char a = 3;
	//0000 0000 0000 0000 0000 0000 0000 0011
	//0000 0011 - a
	char b = 127;
	//0000 0000 0000 0000 0000 0000 0111 1111
	//0111 1111 - b
	char c = a + b;
	//先进行整型提升
	//0000 0000 0000 0000 0000 0000 0000 0011
	//0000 0000 0000 0000 0000 0000 0111 1111
	//0000 0000 0000 0000 0000 0000 1000 0010
	//1000 0010  - c
	//1111 1111 1111 1111 1111 1111 1000 0010 --补码  符号位是1   要补1
	//1111 1111 1111 1111 1111 1111 1000 0001 --原码
	//1000 0000 0000 0000 0000 0000 0111 1110
	//-126
	printf("%d\n", c); //%d打印10进制的有符号整型
	return 0;
}
*/
/*
int main()
{
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a\n");
	if (b == 0xb600)
		printf("b\n");
	if (c == 0xb6000000)
		printf("c\n");
	return 0;
}
*/

/*
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c)); //1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(-c));//4
	return 0;
}
*/

int main()
{

	return 0;
}


