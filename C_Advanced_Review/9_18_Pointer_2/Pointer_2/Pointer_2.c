#include <stdio.h>

//int add(int x, int y)
//{
//	return (x + y);
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int(*parr)[10] = &arr;//首先parr是一个指针，指向的的是拥有十个元素的数组，元素类型为整型。
//
//	printf("%p\n", *parr);
//	printf("%p\n", parr);
//
//
//	int (*parr2)(int, int) = &add;  //parr2就是一个函数指针变量
//
//	int ret = (*parr2)(3, 5);
//    int ret1 = add(3, 5);  //函数名本身其实就是地址
//	printf("%d\n", ret);
//	printf("%d\n", ret1);
//	printf("%p\n",parr2);
//	printf("%p\n", *parr2);
//	printf("%p\n", add);   //&函数名 = 函数名   但是&数组名 ！= 数组名
//	printf("%p\n", &add);
//
//	(*(void(*)())0) ();
//	调用0地址处的函数
//	该函数无参，返回类型是void
//	1.void(*) () --函数指针类型
//	2.(void(*) ())0 --对0进行强制类型转换，被解释为一个函数地址
//	3.*(void(*) ())0 --对0地址进行解引用操作
//	4.(*(void(*) ())0) () --调用0地址处的函数
//	return 0;
//}
//
//void print(char* str)
//{
//
//}
//
//int main()
//{
//	char (*parr3)(char*) = &print; 
//	void (*parr4)(char*) = &print;
//
//	printf("%p\n", *parr3);
//	printf("%p\n", *parr4);
//	return 0;
//}

//函数指针的数组 - 数组    取出函数指针数组的地址


int main()
{
	int arr[5];
	int(*pf)[5] = &arr; // 整型数组
    
	int* arr[5];
	int* (*pf2)[5] = &arr;//整型指针的数组  pf2是指向【整型指针数组】的指针

	int (*pf3)(int, int);//函数指针
	int (*pf4[5])(int, int);//函数指针的数组
	int (*(*pf5)[5])(int, int) = &pf4;//取出的是函数指针数组的地址 pf5就是一个指向【函数指针数组】的指针
	return 0;
}