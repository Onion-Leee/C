#include<stdio.h>
#define ulong unsigned long //不加分号，遇到ulong
typedef unsigned long ulong;//加分号   就是unsigned long类型


/*
int main()
{

	int a = 10;
	int v = a >> 1;//移位符号,相当于v = a / 2^1
	int a = -10;
	printf("a = %u\n", a); //a = 4294967286
	printf("a = %d\n", a); //a = -10

	printf("v = %d\n", v);
	return 0;
}
*/

/*
void main()
{
	int a = 10;
	int b = 6;

	//int v = a & b;//位 与
	//int v = a && b;//逻辑 与，两个为真才为真
	//int v = a | b;//位 或
	//int v = a || b;//逻辑 或，两个为假才为假
	//int v = ~a;//取反 对于单个BIT来说是没有什么区别的，
	//int v = ！a;//取反 但对于多BIT老说就不一样了：
	//~是将多BIT的每位都取反，结果位宽不变。而！操作，
	//结果要么是1要么是0.
	int v = a ^ b;//异 或
	printf("v = %d\n", v);
}
*/

void main()
{
	int a = 0;
	int b = 1;
	int v = a && ++b;//已经是假的了 ，所以不会再参与运算
	printf("v = %d\n", v);//v = 0
	printf("b = %d\n", b);//b = 1 短路求值

}