#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
/*
//strcpy--string copy - 字符串拷贝
//源字符串拷贝到目的字符串
//char* strcpy(char* destination, const char* source);
int main()
{
	char arr1[20] = "########";
	char arr2[] = "bit";
	strcpy(arr1,arr2);//其实拷贝的是bit\0
	//bit\0###
	printf("%s\n", arr1); //bit
	return 0;
}
*/
/*
//memset  --内存设置
//memory-内存 set - 设置
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
//求最大值
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
//写一个函数可以交换两个整形变量的内容
void Swap(int* x, int* y) //x和y -- 形参（形式参数）
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
//把实参传给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不会影响实参
int main()
{
	int a = 10;
	int b = 20;
	printf("a = %d b = %d\n", a, b);
	Swap(&a, &b);//a和b--实参（实际参数）
	printf("a = %d b = %d\n", a, b);
	return 0;
}
*/

/*
//写一个函数可以判断一个数是不是素数
#include<math.h>
int IsPrime(int x)
{
	int i = 0;
	//for (i = 2; i < x; i++)
	for(i = 2;i<=sqrt(x);i++)  //效率更高
	{
		if (x % i == 0)
			return 0;
	}
	//是素数
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
			printf("%d是素数\n", a);
		}
		else
		{
			printf("%d不是素数\n", a);
		}
	}
	return 0;
}
*/

/*
// 写一个函数判断一年是不是闰年
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
			printf("%d是闰年\n", year);
		}
		else
		{
			printf("%d不是闰年\n", year);
		}
	}
	return 0;
}
*/

/*
//写一个函数，实现一个整形有序数组的二分查找
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
		//当数组传参的时候，传过去的是数组名，本质上传过去的是数组的首元素的地址&arr[0]
		int print = Print(arr, k, n);
		if (print == -1)
		{
			printf("找不到\n");
		}
		else
		{
			printf("找到了,%d的下标是%d\n", k,print);
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
//链式访问：把一个函数的返回值作为另外一个函数的参数
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//4321
	return 0;
}
*/

/*
//写一个函数，每调用一次这个函数，就会将num的值增加1
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

//嵌套调用
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