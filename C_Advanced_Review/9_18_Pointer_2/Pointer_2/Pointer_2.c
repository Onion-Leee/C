#include <stdio.h>

//int add(int x, int y)
//{
//	return (x + y);
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int(*parr)[10] = &arr;//����parr��һ��ָ�룬ָ��ĵ���ӵ��ʮ��Ԫ�ص����飬Ԫ������Ϊ���͡�
//
//	printf("%p\n", *parr);
//	printf("%p\n", parr);
//
//
//	int (*parr2)(int, int) = &add;  //parr2����һ������ָ�����
//
//	int ret = (*parr2)(3, 5);
//    int ret1 = add(3, 5);  //������������ʵ���ǵ�ַ
//	printf("%d\n", ret);
//	printf("%d\n", ret1);
//	printf("%p\n",parr2);
//	printf("%p\n", *parr2);
//	printf("%p\n", add);   //&������ = ������   ����&������ ��= ������
//	printf("%p\n", &add);
//
//	(*(void(*)())0) ();
//	����0��ַ���ĺ���
//	�ú����޲Σ�����������void
//	1.void(*) () --����ָ������
//	2.(void(*) ())0 --��0����ǿ������ת����������Ϊһ��������ַ
//	3.*(void(*) ())0 --��0��ַ���н����ò���
//	4.(*(void(*) ())0) () --����0��ַ���ĺ���
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

//����ָ������� - ����    ȡ������ָ������ĵ�ַ


int main()
{
	int arr[5];
	int(*pf)[5] = &arr; // ��������
    
	int* arr[5];
	int* (*pf2)[5] = &arr;//����ָ�������  pf2��ָ������ָ�����顿��ָ��

	int (*pf3)(int, int);//����ָ��
	int (*pf4[5])(int, int);//����ָ�������
	int (*(*pf5)[5])(int, int) = &pf4;//ȡ�����Ǻ���ָ������ĵ�ַ pf5����һ��ָ�򡾺���ָ�����顿��ָ��
	return 0;
}