#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�Լ�����������-�Զ�������
//����һ���������
struct Book
{
	//�������ϸ����Ϣ
	char name[30];//����
	double price; //����
	char id[30]; //��š�ISBN-26164164
};
//�ṹ�����.��Ա��
//�ṹ��ָ��->��Ա��
int main()
{
	//����һ����
	struct Book b1 = { "���Ӣ�۴�",55.62,"ISBN-26164164" };
	//struct Book b2 = { "C���Գ������",53.62,"ISBN-26164165" };
	//������һ���ṹ��ָ��
	struct Book* ps = &b1;
    //����д����ȫ�ȼ�
	printf("����:%s\n",(*ps).name);
	printf("����:%s\n",ps->name);

	//��ӡ
	//printf("����:%s\n", b1.name);
	//printf("����:%lf\n", b1.price);
	//printf("���:%s\n", b1.id);
	return 0;
}




/*
int main()
{
	int a = 10;
	//printf("%p\n", &a);
	printf("a = %d\n", a);
	int* p = &a;
	*p  = 20;//*-�����ò���
	printf("a = %d\n", a);
	return 0;
}
*/