#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define N_VALUES 5
void main()
{
	float values[N_VALUES];
	float* vp;
	//ָ��+-������ָ��Ĺ�ϵ����
	for (vp = &values[0]; vp < &values[N_VALUES];)
	{
		*vp++ = 0;
		//printf("vp = %p ", vp);
	}
}

/*
int main()
{
	int n = 0x11223344;
	unsigned char* pc = (unsigned char*)&n;
	int* pi = &n;
	*pc = 0; //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
	*pi = 0; //�ص��ڵ��ԵĹ����й۲��ڴ�ı仯��
	return 0;
}



void main()
{
	char* pc = (char*)0x00120010;
	short* ps = (short*)0x00120010;
	int* pi = (int*)0x00120010;
	double* pd = (double*)0x00120010;

	printf("pc = 0x%p, pc+1 = 0x%p\n", pc, pc + 1);
	//pc = 0x00120010, pc+1 = 0x00120011
	printf("ps = 0x%p, ps+1 = 0x%p\n", ps, ps + 1);
	//ps = 0x00120010, ps+1 = 0x00120012
	printf("pi = 0x%p, pi+1 = 0x%p\n", pi, pi + 1);
	//pi = 0x00120010, pi+1 = 0x00120014
	printf("pd = 0x%p, pd+1 = 0x%p\n", pd, pd + 1);
	//pd = 0x00120010, pd+1 = 0x00120018
}




//ָ��Ĵ�С���ĸ��ֽ�
void main()
{
	int a = 123456789;
	unsigned char* pc = (unsigned char*)&a; //()��ǿ��ת������
	unsigned short* ps = (unsigned short*)&a;
	int* pi = &a;

	printf("*pc = %u\n", *pc); //21
	printf("*ps = %u\n", *ps); //52501
	printf("*pi = %u\n", *pi);//123456789
}





void Swap(int* x, int* y)
{
	int tmp = *x;  //x�ռ�������a�ĵ�ַ��*xָ��a��ַ�����ֵ
	*x = *y;
	*y = tmp;
}

//�޷�������ֻ�Ǵ���ֵ����Ҫ����ַ����
//void Swap(int x, int y)
//{
//    int tmp = x;
//    x = y;
//    y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d,b = %d\n", a, b);
//	Swap(a, b);
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}
int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d,b = %d\n", a, b);
	Swap(&a,&b);
	printf("a = %d,b = %d\n", a, b);
	return 0;
}



int main()
{
   //const int a = 10;//ֻ��������������
	//a = 100;-
	int a = 10;
	int* p = &a;
	int* q = p;
	return 0;
}
*/

