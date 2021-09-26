#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdbool.h>
/*
int main()
{
	printf("%d\n", sizeof(bool)); //1
	printf("%d\n", sizeof(float)); //4
	printf("%d\n", sizeof(long)); //4
	printf("%d\n", sizeof(double)); //8
	printf("%d\n", sizeof(long long));//8
	return 0;
}
*/
/*
void main()
{
	int count = 0;
	for (char i = 0; i < 127; ++i)
	{
		printf("hello\n");
		count++;
	}
	printf("%d\n", count);
}
*/
/*
int main()
{
	int a = 9;
	int* pa = &a;
	printf("%d\n", a);
	float* pf = (float*)&a;
	printf("%f\n", *pf);
	return 0;
}

*/
/*
void main()
{
	float f = 12.125;
	//1.给出一个float数据能够手动推出内存的存储方式
	//2.给出一个内存的float数据，要能够恢复出真实的float数据
	//S符号位
	//E阶码
	//M尾码
}
*/

int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}