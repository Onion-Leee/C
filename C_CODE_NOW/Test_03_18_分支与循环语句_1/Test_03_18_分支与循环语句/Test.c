#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//��ҵ
//8.��ӡ100~200֮�������

#include<stdio.h>
int main()
{
	for (int i = 100; i <= 200; ++i)
	{
		for (int j = 2; j < i; ++j)
		{
			if (i % j == 0)
				break;
		}
		printf("%d\t", i);
	}
	return 0;
}

/*
//7.��ӡ1000�굽2000��֮�������
#include<stdio.h>
int main()
{
	int n = 0;
	for (int year = 1000; year <= 2000; ++year)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d ", year);
			++n;
		}
		if (n % 5 == 0)
			printf("\n");
	}
	return 0;
}


//6.���������������������������Լ��
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	while (1)
	{
		int max = 0;
		printf("please input two num:");
		scanf("%d %d", &a, &b);
		for (int i = 1; i < a; ++i)
		{
			if (a % i == 0 && b % i == 0)
			{
				printf("%d ", i);
				max = i;
			}
		}
		printf("\n���Լ��Ϊ:%d\n", max);
	}
	return 0;
}


//5.дһ�������ӡ1-100֮������3�ı���������
#include<stdio.h>
int main()
{
	for (int i = 1; i < 100; ++i)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

//4.�����������Ӵ�С���
#include<stdio.h>
int Print(int x, int y, int z)
{
	if (x < y)
	{
		int tmp = x;
		x = y;
		y = tmp;
	}
	if (x < z)
	{
		int tmp = x;
		x = z;
		z = tmp;
	}
	if (y < z)
	{
		int tmp = y;
		y = z;
		z = tmp;
	}
	printf("�Ӵ�С:%d %d %d\n", x, y, z);
	return 0;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (1)
	{
		printf("please input three num:");
		scanf("%d %d %d", &a, &b, &c);
		Print(a, b, c);
	}
	return 0;
}

/*
//3.
#include<stdio.h>
int main()
{
	int x = 3;
	int y = 3;
	switch (x % 2)
	{
	case 1:
		switch (y)
		{
		case 0:
			printf("first");
		case 1:
			printf("second");
			break;
		default: printf("hello");
		}
	case 2:
		printf("third");
	}
	return 0;
}

//2.
#include<stdio.h>
int func(int a)
{
	int b;
	switch (a)
	{
	case 1: b = 30;
	case 2: b = 20;
	case 3: b = 16;
	default: b = 0;
	}
	return b;
}
int main()
{
	int x = func(1);
	printf("%d ", x);
	return 0;
}


//1.
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i = 5)
			printf("%d ", i);
	}
	return 0;
}



int main()
{
	int i = 0;
//whileѭ���е�continue����������ѭ����ߵĴ���ֱ��ȥ�жϲ��֣�
//������һ������ж�
//��ʵ��ѭ����ֻҪ����break����ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ����
//���ԣ�while�е�break������������ֹѭ����
	while (i < 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	}
	return 0;
}


int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;//3
	case 2:
		n++;//2
	case 3:
		switch (n)
		{//switch����Ƕ��ʹ��
		case 1:
			n++;
		case 2:
			m++;//4
			n++;//3
			break;
		}
	case 4:
		m++;//5
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);//5  3
	return 0;
}


//switch���
int main()
{
	int day = 0;
	while (1)
	{
		printf("input a num:");
		scanf("%d", &day);
		switch (day)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("weekday\n");
			break;
		case 6:
		case 7:
			printf("weekend\n");
			break;
		default: //Ĭ��ѡ������ܱ�case��������
			printf("�������\n");
			break;
		}
	}
	return 0;
}

//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//}


	//�ж������ǲ�������
	int main()
	{
		int a = 0;
		while (1)
		{
			printf("please input a num:");
			scanf("%d", &a);
			if (a % 2 == 1)
				printf("%d is odd\n", a);
			else
				printf("%d is not odd\n", a);
		}
		return 0;
	}


	//���1-100֮�������
	int main()
	{
		int i = 1;
		while (i <= 100)
		{
			printf("%d ", i);
			i += 2;
		}
		//for (int i = 1;i <= 100;++i)
		//{
		//	if (i % 2 == 1)
		//	{
		//		printf("%d ", i);
		//	}
		//}
		return 0;
	}


	int main()
	{
		int age = 10;
		if (5 == age) //�Ƚϳ����ͱ�����ֵ�Ƿ���ȵ�ʱ�򣬰ѳ����������
		{
			printf("hehe\n");
		}
		return 0;
	}

	int main()
	{
		int a = 0;
		int b = 2;
		if (a == 1)
			if (b == 2)
				printf("hehe\n");
			else
				printf("haha\n");
		return 0;
	}
	*/