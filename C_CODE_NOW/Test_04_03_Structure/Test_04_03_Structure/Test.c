#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
struct Stu
{
	char name[20];
	char id[18];
	short age;
	char sex[5];
}s2��s3��s4; //s2��s3��s4���Ǵ����Ľṹ����� - ȫ�ֱ���

int main()
{
	//�����s1�Ǿֲ�����
	struct Stu s1;//ѧ��������s1
	struct Stu s2;//ѧ��������s2
	return 0;
}
*/
//typedef - ���Ͷ��� - �����ض���
//���������ַ���char c;��    ˫�������ַ���(char arr[];)
//�ṹ�����.��Ա��
//�ṹ��ָ��->��Ա��
/*
struct Stu 
{
	int n;
	char c[20];
	char arr[20];
};
void Print(struct Stu* ps)
{
	printf("%d\t%s\t%s\t", (*ps).n, (*ps).c, (*ps).arr);
	printf("%d\t%s\t%s\t", ps->n, ps->c, ps->arr);
}
int main()
{
	struct Stu s = { 10,"����","I am a student!" };
	Print(&s);
	return 0;
}
*/

//char short int long float double - ��������
//ѧ��:����+ѧ��+����+�Ա�
//��
//���Ӷ���-��������
//C�����ṩ��һ����struct - �ṹ��ؼ���
//
//ѧ��������
/*
struct Stu
{
	//����ѧ�����������
	char name[20];
	char id[18];
	short age;
	char sex[5];
}s2,s3,s4;//s2,s3,s4 ���Ǵ����Ľṹ�����-ȫ�ֱ���

int main()
{
	//s1�Ǿֲ�����
	struct Stu s1;//ѧ������s1

	return 0;
}
*/
/*
struct S
{
	int a;
	char c;
	char arr[10];
	double d;
};

typedef struct T
{
	char buf[20];
	struct S s;
	int *p;
}T;

//typedef - ���Ͷ���- �����ض���

int main()
{
	int a = 10;
	//struct S s = {100, 'w', "bit", 3.14};
	//
	//�ṹ�����.��Ա��
	//�ṹ��ָ��->��Ա��
	//
	T st = { "hello bit", {1000, 'b', "abcdef", 4.4}, &a};
	T* pt = &st;
	printf("%s\n", pt->buf);
	printf("%lf\n", pt->s.d);

	//printf("%s\n", st.buf);
	//printf("%d\n", st.s.a);
	//printf("%c\n", st.s.c);
	//printf("%s\n", st.s.arr);
	//printf("%lf\n", st.s.d);
	//printf("%d\n", *(st.p));

	//struct T st2;

	return 0;
}
*/
struct Stu
{
	//����ѧ�����������
	char name[20];
	char id[18];
	short age;
	char sex[5];
};//s2,s3,s4 ���Ǵ����Ľṹ�����-ȫ�ֱ���

void print1(struct Stu tmp)
{
	printf("%s\t%s\t%d\t%s\n", tmp.name, tmp.id, tmp.age, tmp.sex);
}

void print2(struct Stu* ps)
{
	printf("%s\t%s\t%d\t%s\n", ps->name, ps->id, ps->age, ps->sex);
}

int main()
{
	struct Stu s = {"����", "2019010305", 20, "��"};
	print1(s);
	print2(&s);

	return 0;
}