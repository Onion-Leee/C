#include<stdio.h>
#define ulong unsigned long //���ӷֺţ�����ulong
typedef unsigned long ulong;//�ӷֺ�   ����unsigned long����


/*
int main()
{

	int a = 10;
	int v = a >> 1;//��λ����,�൱��v = a / 2^1
	int a = -10;
	printf("a = %u\n", a); //a = 4294967286
	printf("a = %d\n", a); //a = -10

	printf("v = %d\n", v);
	return 0;
}
*/

/*
void main()
{
	int a = 10;
	int b = 6;

	//int v = a & b;//λ ��
	//int v = a && b;//�߼� �룬����Ϊ���Ϊ��
	//int v = a | b;//λ ��
	//int v = a || b;//�߼� ������Ϊ�ٲ�Ϊ��
	//int v = ~a;//ȡ�� ���ڵ���BIT��˵��û��ʲô����ģ�
	//int v = ��a;//ȡ�� �����ڶ�BIT��˵�Ͳ�һ���ˣ�
	//~�ǽ���BIT��ÿλ��ȡ�������λ���䡣����������
	//���Ҫô��1Ҫô��0.
	int v = a ^ b;//�� ��
	printf("v = %d\n", v);
}
*/

void main()
{
	int a = 0;
	int b = 1;
	int v = a && ++b;//�Ѿ��Ǽٵ��� �����Բ����ٲ�������
	printf("v = %d\n", v);//v = 0
	printf("b = %d\n", b);//b = 1 ��·��ֵ

}