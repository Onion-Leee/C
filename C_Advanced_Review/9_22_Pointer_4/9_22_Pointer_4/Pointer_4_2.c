#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int a[3][4] = { 0 };

	printf("%d\n", sizeof(a));  //12*4 = 48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16
	printf("%d\n", sizeof(a[0] + 1));//4 -- a[0]作为数组名并没有单独放在
	                                 //sizeof内部，也没有取地址，所以a[0]
	                                 //就是第一行第一个的地址，也就是第一行首元素的地址，
	                                 //所以a[0]+1就是第一行第二个元素的地址
	printf("%d\n", sizeof(*(a[0] + 1)));//4 -- 第一行第二个元素
	printf("%d\n", sizeof(a + 1));//4 -- a是二维数组的数组名，并没有取地址，也没有
	                              //单独放在sizeof内部，所以a就代表的是二维数组首
	                              //元素的地址，即：第一行的地址
	                              //a+2就是二维数组第二行的首地址（地址）
	printf("%d\n", sizeof(*(a + 1)));//16 -- a+1是第二行的地址，所以*（a+1)
	                                 //表示第二行，计算的是第二行的大小。
	printf("%d\n", sizeof(&a[0] + 1));//4 -- a[0]是第一行的数组名，&a[0]取出的是
	                                  //第一行的地址，&a[0]+1就是第二行的地址
	printf("%d\n", sizeof(*(&a[0] + 1)));//16 -- &a[0]+1就是第二行的地址，*(&a[0] + 1
	                                     //就是第二行，计算的是其第二行的大小
	printf("%d\n", sizeof(*a));//16 -- a就是首元素的地址，即第一行的地址。
	                           //所以*a就是第一行，计算的是第一行的大小。
	printf("%d\n", sizeof(a[3]));//16 -- a[3]是第四行的数组名（如果有的话），
	                             //就算不存在也能通过类型计算大小。
	printf("%d\n", sizeof(a[-1]));//16

	return 0;
}


int main()
{
	short s = 5;
	int a = 4;
	printf("%d\n", sizeof(s = a + 6));//2
	printf("%d\n", s);//5 -- s没有真的计算

	return 0;
}


int main()
{
    int a[5] = { 1, 2, 3, 4, 5 };
    int* ptr = (int*)(&a + 1);
    printf("%d,%d", *(a + 1), *(ptr - 1));//  2  5

    return 0;
}


//程序的结果是什么？

//由于还没学习结构体，这里告知结构体的大小是20个字节
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p;
//假设p 的值为0x100000。 如下表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节

int main()
{
	printf("%p\n", p + 0x1); //0x100014
	printf("%p\n", (unsigned long)p + 0x1);//0x100001
	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
	return 0;
}


int main()
{
    int a[4] = { 1, 2, 3, 4 };
    int* ptr1 = (int*)(&a + 1);
    int* ptr2 = (int*)((int)a + 1); //+1就相当于地址往后移动一位,例如：0x0012ff44 --> int+1 -->0x0012ff45

    printf("%x,%x", ptr1[-1], *ptr2); //4   200 0000
    return 0;
}



#include <stdio.h>
int main()
{
    int a[3][2] = { (0, 1), (2, 3), (4, 5) }; //逗号表达式
    int* p;
    p = a[0];
    printf("%d", p[0]);//1
    return 0;
}


int main()
{
    int a[5][5];
    int(*p)[4];
    p = a;//int (*)[5]
    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
    //                      FFFFFFFC                -4  

    return 0;
}


int main()
{
    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* ptr1 = (int*)(&aa + 1);
    int* ptr2 = (int*)(*(aa + 1));  //aa既前面没有sizeof，也没有&，所以其代表首元素的地址，也就是第一行的地址，
	                                //aa+1就是第二行的地址，也就是第二行首元素的地址，*(aa + 1)相当于拿到了第二行，相当于aa[1],
	                                //第二行谁说了算呢？肯定是第二行的数组名说了算，因此也就相当于拿到了第二行的数组名。
    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1)); //10    5
    return 0;
}


#include <stdio.h>

int main()
{
	char* a[] = { "work","at","alibaba" };
	char** pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}


int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *-- * ++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1); //EW   //*(*(cpp-1)-1)+1
	return 0;
}
