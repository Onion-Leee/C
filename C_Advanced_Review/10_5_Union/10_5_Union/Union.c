#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i++; i++ < 4;)
//	{
//		printf("%d", i);
//	}
//	printf("\n%d", i);
//	return 0;
//}
#include<stdio.h> 
int add(int x, int y) {
	return x + y;
}
int main() 
{
	int a = 10;
	int b = 20;
	int ret = add(a, b);
	printf("%d", ret);
	return 0;
}

