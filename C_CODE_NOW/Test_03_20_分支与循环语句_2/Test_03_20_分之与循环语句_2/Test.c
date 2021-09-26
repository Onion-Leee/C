#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", j, i, j * i);
			if (i == j)
				printf("\n");
		}
	}
	return 0;
}



/*
//屏幕上输出9*9乘法口诀表
#include<stdio.h>
int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", j, i, j * i);
			if (i == j)
				printf("\n");
		}
	}
	return 0;
}


//求10 个整数中最大值
#include<stdio.h>
int main()
{
	int i = 0;
	int max = 0;
	int arr[10] = { 0 };
	printf("please input ten num:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max = %d\n", max);
	return 0;
}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
#include<stdio.h>
int main()
{
	int i = 1;
	double sum = 0;
	double n = 1;
	//int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + n / i;  //sum+=flag*(1.0/i)
		n = n * -1;         //flag = -flag 
	}
	printf("%lf\n", sum);
	return 0;
}




//编写程序数一下 1到 100 的所有整数中出现多少个数字9
#include<stdio.h>
int main()
{
	int count = 0;
	for (int i = 0; i <= 100; ++i)
	{
		//判断个位
		if (i % 10 == 9)
		{
			count++;
		}
		//判断十位
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("出现了%d个数字9",count);
	return 0;
}



int main()
{
	int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20) break;
		if (b % 3 == 1)
		{
			b = b + 3;//4   7  10 13  16  19 22
			continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);
	return 0;
}


//上面程序输入顺序：输入A，enter，B，再按enter。
//其中A将赋给a,换行符enter将赋给b,B将赋给c，
//最后的enter将敲下的上述字符输入计算机。
int main()
{
	char a, b, c;
	a = getchar();
	b = getchar();
	c = getchar();
	putchar(a);
	putchar(b);
	putchar(c);
	putchar('\n');
	return 0;
}

int main()
{
	char a, b;
	a = getchar();
	b = getchar();
	putchar(a);
	putchar(b);
	putchar('\n');
	return 0;
}



int main()
{
	char input[20] = { 0 };
	char ch = 0;
	printf("请输入密码:");
	scanf("%s", input);
	printf("请确认密码:(Y/N):");
	getchar(ch);
	ch = getchar(ch);
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	putchar(ch);
	return 0;

}

int main()
{
	char input[20] = { 0 };
	int ch = 0;
	printf("请输入密码:");
	scanf("%s", input);
	printf("请确认密码:(Y/N):");
	//清空缓冲代码
	while ((ch = getchar()) != '\n')
	{
		;
	}
	ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}

	return 0;

}

int main()
{
	char input[20] = { 0 };
	int ch = 0;
	printf("请输入密码:");
	scanf("%s", input);
	printf("请确认密码:(Y/N):");
	getchar();
	ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}

	return 0;

}

//代码1
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) //EOF-end of file-文件结束标志-放在文件末尾
//		putchar(ch);
//	return 0;
//}
//代码2
//#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 100;
//	int count = 0;
//	while (i <= 200)
//	{
//
//		int j = 2;
//		//i=a*b,a或者b必然有一个是<=开平方i的
//		while (j <= sqrt(i))
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


// 计算 1!+2!+3!+……+10!
//优化
int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("ret = %d\n", sum);
	return 0;
}

int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = 1;  //算每一个的阶乘都需要ret归1
		for (i = 1; i <= n; ++i)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("ret = %d\n", sum);
	return 0;
}



//计算n的阶乘
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 1;
	int ret = 1;

	while (i<=n)
	{
		ret = ret * i;
		i++;
	}
	printf("ret = %d\n", ret);
	return 0;
}


int main()
{
	int i = 0;
	do
	{
		if (i == 5)
			break;
		//continue;  //死循环，因为直接跳出到判断部分while（i<10）这里
		printf("%d ", i);   //0 1 2 3 4
		i++;
	} while (i < 10);
	return 0;
}

//循环0次
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)
		k++;
	return 0;
}

int main()
{
	char input[20] = { 0 };
	int ch = 0;
	printf("请输入密码:");
	scanf("%s", input);
	printf("请确认密码:(Y/N):");
	//getchar();
	//清空缓冲代码
	while ((ch = getchar()) != '\n')
	{
		;
	}
	ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}

	return 0;

}

int main()
{
	int ch = 0;
	ch = getchar();
	putchar(ch);
	return 0;
}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}


//打印100-200之间的素数
//试除法
//素数求解的n种境界
//方法三
int main()
{
	int i = 101;
	int count = 0;
	while (i <= 200)
	{

		int j = 2;
		//i=a*b,a或者b必然有一个是<=开平方i的
		while (j <= sqrt(i))
		{
			if (i % j == 0)
			{
				break;
			}
			j++;
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
		i=i+2;
	}
	printf("\ncount = %d\n", count);
	return 0;
}


//方法二
//一个局部变量不初始化的时候，放的是随机值
int main()
{
	int i = 100;
	int count = 0;
	while (i <= 200)
	{

		int j = 2;
		//i=a*b,a或者b必然有一个是<=开平方i的
		while (j <= sqrt(i))
		{
			if (i % j == 0)
			{
				break;
			}
			j++;
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
		i++;
	}
	printf("\ncount = %d\n", count);
	return 0;
}



//方法一
int main()
{
	int i = 100;
	int count = 0;
	while (i <= 200)
	{
		//素数是只能被1和它本身的值整除的值
		//1.产生2~i-1之间的数字，拿产生的数字去试除i
		//如果被整除，说明i不是素数，如果2~i-1之间的数字没有一个能整除i，则就说明i是素数
		int j = 2;
		while (j < i)
		{
			//拿j试除i
			if (i % j == 0)
			{
				break; //跳到i++那
			}
			j++;
		}
		if (i == j)
		{
			printf("%d ", i);
			count++;
		}
		i++;
	}
	printf("\ncount = %d\n", count);
	return 0;
}


//打印1000-2000的闰年
int main()
{
	int count = 0;
	int year = 1000;
	while (year <= 2000)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
		year++;
	}
	printf("\ncount = %d\n", count);
	return 0;
}

//求两个数的最大公约数
//方法二辗转相除法
int main()
{
	int m = 24;
	int n = 18;
	while (m%n)  //为0的时候跳出while
	{
		int r = m % n;
		m = n;
		n = r;
	}
	printf("最大公约数是:%d\n", n);
	return 0;
}


//方法一
int main()
{
	int m = 24;
	int n = 18;
	int min = (m > n ? n : m);
	while (1)
	{
		if (m % min == 0 && n % min == 0)
		{
			printf("最大公约数是:%d\n", min);
			break;
		}
		min--;
	}
	return 0;
}

//打印1-100之间三的倍数的数字
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
			printf("%d ", i);
		i++;
	}
	return 0;
}



//将三个数字按从大到小输出
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}
*/