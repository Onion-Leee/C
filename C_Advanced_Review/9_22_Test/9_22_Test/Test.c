#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//
//    printf("%x,%x", ptr1[-1], *ptr2); //4     2000000
//    return 0;
//}


//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) }; //∂∫∫≈±Ì¥Ô Ω
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);//1
//    return 0;
//}

//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;//int (*)[5]
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    //             -4  
//
//    return 0;
//}


int main()
{
	char* a[] = { "work","at","alibaba" };
	char** pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}