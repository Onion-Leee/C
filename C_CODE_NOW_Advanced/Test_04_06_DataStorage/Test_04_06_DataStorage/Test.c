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
	//1.����һ��float�����ܹ��ֶ��Ƴ��ڴ�Ĵ洢��ʽ
	//2.����һ���ڴ��float���ݣ�Ҫ�ܹ��ָ�����ʵ��float����
	//S����λ
	//E����
	//Mβ��
}
*/

int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	return 0;
}