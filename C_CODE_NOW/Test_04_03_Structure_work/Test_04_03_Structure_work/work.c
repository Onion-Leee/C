#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
/*
struct S
{
	int a;
	int b;
};
int main()
{
	struct S a, * p = &a;
	a.a = 99;
   // printf("%d\n",(*p).a);
	printf("%d\n",p->a);
	return 0;
}
*/
/*
struct stu
{
	int num;
	char name[10];
	int age;
};


void fun(struct stu* p)
{
	printf("% s\n", (*p).name);
	return;
}


int main()
{
	struct stu students[3] = { {9801,"zhang",20},
							   {9802,"wang",19},
							   {9803,"zhao",18}
	};
	fun(students + 1);
	return 0;
}
*/

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�

#include<stdio.h>
int main()
{
	int n = 0;
	printf("money = :\n");
	scanf("%d", &n);
	int count = 0;
	int tmp = n;
	while (tmp >= 2)
	{
		count += (tmp / 2);
		tmp = tmp / 2 + tmp % 2;  //20  10  5  2  1  1
	}
	n = n + count;
	printf("���Ժ�%dƿ��ˮ!\n", n);
	return 0;
}
