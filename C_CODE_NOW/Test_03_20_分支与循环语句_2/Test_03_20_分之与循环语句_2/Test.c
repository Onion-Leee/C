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
//��Ļ�����9*9�˷��ھ���
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


//��10 �����������ֵ
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

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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




//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
#include<stdio.h>
int main()
{
	int count = 0;
	for (int i = 0; i <= 100; ++i)
	{
		//�жϸ�λ
		if (i % 10 == 9)
		{
			count++;
		}
		//�ж�ʮλ
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("������%d������9",count);
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


//�����������˳������A��enter��B���ٰ�enter��
//����A������a,���з�enter������b,B������c��
//����enter�����µ������ַ�����������
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
	printf("����������:");
	scanf("%s", input);
	printf("��ȷ������:(Y/N):");
	getchar(ch);
	ch = getchar(ch);
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	putchar(ch);
	return 0;

}

int main()
{
	char input[20] = { 0 };
	int ch = 0;
	printf("����������:");
	scanf("%s", input);
	printf("��ȷ������:(Y/N):");
	//��ջ������
	while ((ch = getchar()) != '\n')
	{
		;
	}
	ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}

	return 0;

}

int main()
{
	char input[20] = { 0 };
	int ch = 0;
	printf("����������:");
	scanf("%s", input);
	printf("��ȷ������:(Y/N):");
	getchar();
	ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}

	return 0;

}

//����1
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) //EOF-end of file-�ļ�������־-�����ļ�ĩβ
//		putchar(ch);
//	return 0;
//}
//����2
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
//		//i=a*b,a����b��Ȼ��һ����<=��ƽ��i��
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


// ���� 1!+2!+3!+����+10!
//�Ż�
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
		ret = 1;  //��ÿһ���Ľ׳˶���Ҫret��1
		for (i = 1; i <= n; ++i)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("ret = %d\n", sum);
	return 0;
}



//����n�Ľ׳�
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
		//continue;  //��ѭ������Ϊֱ���������жϲ���while��i<10������
		printf("%d ", i);   //0 1 2 3 4
		i++;
	} while (i < 10);
	return 0;
}

//ѭ��0��
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
	printf("����������:");
	scanf("%s", input);
	printf("��ȷ������:(Y/N):");
	//getchar();
	//��ջ������
	while ((ch = getchar()) != '\n')
	{
		;
	}
	ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
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


//��ӡ100-200֮�������
//�Գ���
//��������n�־���
//������
int main()
{
	int i = 101;
	int count = 0;
	while (i <= 200)
	{

		int j = 2;
		//i=a*b,a����b��Ȼ��һ����<=��ƽ��i��
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


//������
//һ���ֲ���������ʼ����ʱ�򣬷ŵ������ֵ
int main()
{
	int i = 100;
	int count = 0;
	while (i <= 200)
	{

		int j = 2;
		//i=a*b,a����b��Ȼ��һ����<=��ƽ��i��
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



//����һ
int main()
{
	int i = 100;
	int count = 0;
	while (i <= 200)
	{
		//������ֻ�ܱ�1���������ֵ������ֵ
		//1.����2~i-1֮������֣��ò���������ȥ�Գ�i
		//�����������˵��i�������������2~i-1֮�������û��һ��������i�����˵��i������
		int j = 2;
		while (j < i)
		{
			//��j�Գ�i
			if (i % j == 0)
			{
				break; //����i++��
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


//��ӡ1000-2000������
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

//�������������Լ��
//������շת�����
int main()
{
	int m = 24;
	int n = 18;
	while (m%n)  //Ϊ0��ʱ������while
	{
		int r = m % n;
		m = n;
		n = r;
	}
	printf("���Լ����:%d\n", n);
	return 0;
}


//����һ
int main()
{
	int m = 24;
	int n = 18;
	int min = (m > n ? n : m);
	while (1)
	{
		if (m % min == 0 && n % min == 0)
		{
			printf("���Լ����:%d\n", min);
			break;
		}
		min--;
	}
	return 0;
}

//��ӡ1-100֮�����ı���������
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



//���������ְ��Ӵ�С���
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