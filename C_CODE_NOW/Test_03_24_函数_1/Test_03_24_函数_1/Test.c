#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
/*
//strcpy--string copy - �ַ�������
//Դ�ַ���������Ŀ���ַ���
//char* strcpy(char* destination, const char* source);
int main()
{
	char arr1[20] = "########";
	char arr2[] = "bit";
	strcpy(arr1,arr2);//��ʵ��������bit\0
	//bit\0###
	printf("%s\n", arr1); //bit
	return 0;
}
*/
/*
//memset  --�ڴ�����
//memory-�ڴ� set - ����
//void * memset ( void * ptr, int value, size_t num );
int main()
{
	char arr[] = "hello bit";  //*****bit
	memset(arr,'*',5);
	printf("%s\n", arr);
	return 0;
}
*/

/*
//�����ֵ
int get_max(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a,b);
	printf("%d\n", max);
	return 0;
}
*/

/*
//дһ���������Խ����������α���������
void Swap(int* x, int* y) //x��y -- �βΣ���ʽ������
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
//��ʵ�δ����βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��
int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d b = %d\n", a, b);
	Swap(&a, &b);//a��b--ʵ�Σ�ʵ�ʲ�����
	printf("a = %d b = %d\n", a, b);
	return 0;
}
*/

/*
//дһ�����������ж�һ�����ǲ�������
#include<math.h>
int IsPrime(int x)
{
	int i = 0;
	//for (i = 2; i < x; i++)
	for(i = 2;i<=sqrt(x);i++)  //Ч�ʸ���
	{
		if (x % i == 0)
			return 0;
	}
	//������
	return 1;
}
int main()
{
	int a = 0;
	while (1)
	{
		printf("please input a num:");
		scanf("%d", &a);
		if (IsPrime(a) == 1)
		{
			printf("%d������\n", a);
		}
		else
		{
			printf("%d��������\n", a);
		}
	}
	return 0;
}
*/

/*
// дһ�������ж�һ���ǲ�������
int IsLeap(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	while (1)
	{
		printf("please input a year:");
		scanf("%d", &year);
		if (IsLeap(year) == 1)
		{
			printf("%d������\n", year);
		}
		else
		{
			printf("%d��������\n", year);
		}
	}
	return 0;
}
*/

/*
//дһ��������ʵ��һ��������������Ķ��ֲ���
int Print(int arr[], int x, int n)
{
	int left = 0;
	int right = n - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (x > arr[mid])
		{
			left = mid + 1;

		}
		else if (x < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	while (1)
	{
		printf("please input a num:");
		scanf("%d", &k);
		//�����鴫�ε�ʱ�򣬴���ȥ�����������������ϴ���ȥ�����������Ԫ�صĵ�ַ&arr[0]
		int print = Print(arr, k, n);
		if (print == -1)
		{
			printf("�Ҳ���\n");
		}
		else
		{
			printf("�ҵ���,%d���±���%d\n", k,print);
		}
	}
	return 0;
}
*/

/*
int main()
{
	int len = strlen("bit");
	printf("len = %d\n",len);
	printf("len = %d\n",strlen("bit"));
	return 0;
}
*/

/*
//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ����һ�������Ĳ���
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//4321
	return 0;
}
*/

/*
//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("%d\n", num);
	Add(&num);
	printf("%d\n", num);
	return 0;
}
*/

//Ƕ�׵���
void new_line()
{
	printf("hehe\n");
}
void three_line()

{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		new_line();
	}
}
int main()
{
	three_line();
	return 0;
}