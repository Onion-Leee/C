#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fun()
{
	static int count = 1;
	return ++count;
}
int main()
{
	int answer;
    //��������
	answer = fun() - fun() * fun();
	printf("%d\n", answer);//������٣�
	return 0;
}
////����5
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}

/*
void main()
{
	int i = 0;
	printf("%d %d %d %d\n", i++, ++i, i++, ++i);//3 4 1 4,������������
	//��VC6.0���� 2 2 1 1
	printf("i = %d\n", i);  //4
}

void main()
{
	float f = 12.34f; //��Ҫ��f
	printf("%f\n", f);

	int val = f;//��ʽת��
	//int val = (int)f;//��ʽת��
	printf("val = %d\n", val);
}


//cֻҪ������ʽ����,�ͻᷢ����������,���ʽ +c ,�ͻᷢ������
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(-c));//4
	printf("%u\n", sizeof(!c));//1
	return 0;
}

int main()
{
	char a = 0xb6;//�õ��Ĳ�����182������-74
	short b = 0xb600;
	int c = 0xb6000000;
	if (a == 0xb6)//-74������b6
		printf("a");
	if (b == 0xb600)//����
		printf("b");
	if (c == 0xb6000000)//���
		printf("c");
	return 0;
}
*/