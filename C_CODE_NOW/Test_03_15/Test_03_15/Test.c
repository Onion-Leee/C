#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("a = %d b = %d\n", a, b); //11 11
//	//int b = a++;
//	//printf("a = %d b = %d\n", a, b); //11 10
//	//int b = a--;//����--����ʹ��a��ֵ����--
//	//printf("a = %d b = %d\n", a, b); //9 10
//	//int b = --a;//ǰ��--����--����ʹ��a��ֵ
//	//printf("a = %d b = %d\n", a, b);//9 9
//	return 0;
//}
//int main()
//{
//	//ǿ������ת��
//	int a = (int)3.14;//ǿ�ƽ�3.14ת��������  
//
//	return 0;
//}

/*typedef unsigned int u_int;*///����������

//int main()
//{
//	//int a = 10;//�ֲ�����-auto����
//	//unsigned int age;//�޷�������
//	u_int age;//����һ��һ����˼
//	return 0;
//}

//int main()
//{
//	register int a = 0;//����aδ���ᱻƵ��������ʹ��
//	//register���ǽ����a���ڼĴ�����
//}

//static������
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

//static���ξֲ��������ı��˱������������ڣ��������ڱ䳤��
//���˾ֲ���ΧҲ������
//void test()
//{
//	static int a = 1;//�ֲ�����
//	a++;
//	printf("%d ", a);//2 3 4 5 6 7 8 9 10 11,����staticΪ2 2 2 2 2 2 2 2 2 2
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//static����ȫ�ֱ���
//extern�������ⲿ���ŵ�
//extern int g_val;
//int main()
//{
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//��������
 /*
extern int Add(int x, int y);
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}*/

//#define �����
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ķ�ʽ
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//��ķ�ʽ
 /*
#define MAX(X,Y) ((X)>(Y)?(X):(Y))
int main()
{
	int a = 10;
	int b = 20;
	int max = MAX(a, b);
	printf("max = %d\n", max);
	return 0;
}*/

//ָ��
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);//005CF7A8
//	printf("%p", p); //005CF7A8
//	return 0;
//}
//
//int main()
//{
//	char ch = 'a';
//	int a = 10;
//	char* pc = &ch;
//	//*pc;//�����ò�������*pc����a
//	int* pa = &a;
//	//*pc = 'w';
//	//printf("%c\n",ch);
//	printf("%d\n", sizeof(pc));//4   win32ָ�붼���ĸ��ֽڣ�64λƽ̨��8���ֽ�
//	printf("%d\n", sizeof(pa));//4
//	return 0;
//}

//
//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(long double));//8
//	return 0;
//}

int sum(int a)
{
    int c = 0;
    static int b = 3;
    c += 1;
    b += 2;
    return (a + b + c);
}
int main()
{
    int i;
    int a = 2;
    for (i = 0; i < 5; i++)
    {
        printf("%d,", sum(a));
    }
}