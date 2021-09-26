#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//作业
//8.打印100~200之间的素数

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
//7.打印1000年到2000年之间的闰年
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


//6.给定两个数，求这两个数的最大公约数
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
		printf("\n最大公约数为:%d\n", max);
	}
	return 0;
}


//5.写一个代码打印1-100之间所有3的倍数的数字
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

//4.将三个数按从大到小输出
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
	printf("从大到小:%d %d %d\n", x, y, z);
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
//while循环中的continue，跳过本次循环后边的代码直接去判断部分，
//进行下一项入口判断
//其实在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。
//所以：while中的break是用于永久终止循环的
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
		{//switch允许嵌套使用
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


//switch语句
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
		default: //默认选项，处理不能被case处理的情况
			printf("输入错误\n");
			break;
		}
	}
	return 0;
}

//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//}


	//判断数字是不是奇数
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


	//输出1-100之间的奇数
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
		if (5 == age) //比较常量和变量的值是否相等的时候，把常量放在左边
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