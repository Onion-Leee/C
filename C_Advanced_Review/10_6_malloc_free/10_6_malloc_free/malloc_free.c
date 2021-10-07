
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>


//栈区：局部变量+函数形参
//堆区：动态内存开辟（malloc/calloc/free/realloc)
//静态区（数据段）：全局变量+静态变量


//需要注意的是malloc函数的返回值一定要做检查
int main()
{
	int* p = (int*)malloc(10 * sizeof(int));

	return 0;
}