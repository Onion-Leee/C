#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int* ptr1 = (int*)(&a + 1);  //(int *)ǿתΪ����ָ��
	int* ptr2 = (int*)((int)a + 1);//aǿתΪint�ͣ�+1�൱�ڼ���һ���ֽ�
	printf("%x,%x", ptr1[-1], *ptr2);  //ptr1[-1]���� *(ptr1 - 1)
	return 0;
}
*/
/*
//�����ıȽϹ���
int int_cmp(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
//����  
void _swap(void* p1, void* p2, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}
void bubble(void* base, int count, int size, int(*cmp)(void*, void*))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			//���� cmp(a,b) {return a - b;}
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
			{
				_swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	//char *arr[] = {"aaaa","dddd","cccc","bbbb"};
	int i = 0;
	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
*/
/*
void BubbleSort(int ar[], int n)
{
	int i = 0;
	for (i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - 1 - i; ++j)
		{
			if (ar[j] > ar[j + 1])
			{
				int tmp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = tmp;
			}
		}
	}
}
void PrintfArray(int ar[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
}
int compare(const void* elem1, const void* elem2)
{
	return (*(int*)elem1 - *(int*)elem2);  // �������  >0 <0  ==0
	//return (*(int*)elem2 - *(int*)elem1);
}
void main()
{
	int ar[] = { 3,5,7,8,100,2,9,103,10,7,4,1,23,12,56,73,45 };
	int n = sizeof(ar) / sizeof(ar[0]);
	PrintfArray(ar, n);
	//BubbleSort(ar,n);
	qsort(ar, n, sizeof(ar[0]), compare);//�ص�����
	PrintfArray(ar, n);
}
*/
/*
void main()
{
	int a = 10;
	double b = 12.34;

	a = b;     //��ʾת��
	a = (int)b;//��ʾת��
}
*/
/*
//����1
(*(void(*)())0)();

//����2
void (*signal1(int, void(*)(int)))(int);
*/

/*
//1.
int (*func)(int*, int (*)(int*));
//����func��һ��ָ�룬��ָ��ָ�����������Ǻ���ָ�룬
//��ָ����Ϊһ��ָ��Ĳ���������һ������ָ��Ĳ���������ֵΪ����
//2.
int (*func[5])(int*);
//��һ�����飬���������Ԫ�أ�ÿ��Ԫ�ؾ���һ������ָ�룬��ŵĺ���������ָ��Ĳ�����һ�����ͷ���ֵ
//3.
int (*(*func)[5])(int*);
//��һ��ָ�룬ָ��ָ�����һ�����飬���������Ԫ�أ�
//ÿ��Ԫ������һ��ָ�룬��ָ������Ϊ������������ŵĲ���Ϊһ������ָ���һ�����ͷ���ֵ��
//�������Ǻ���ָ�������
//4.
int(*(*func)(int*))[5];
//��һ��ָ�����ͣ�ָ��ָ����Ǻ�����������һ������ָ�������һ��ָ��ķ��أ����ص�ָ������ָ������ģ�
//��ָ����Ϊ�������Ԫ��
//5.
int*(*func(int*))[5];
//��һ�������������Ĳ���Ϊ����ָ�룬�и�����ֵ������ֵ��һ������ָ�룬
//��ָ����Ϊ���Ԫ�أ�ÿ��Ԫ����һ������ָ��
*/

/*
void main()
{
	int (*a)();     //ָ�� -> ����
	int (*a[10])(); //�������������˺���ָ�� -> ת���
}
*/
/*
int Max(int a, int b)
{
	return a > b ? a : b;
}
int Min(int a, int b)
{
	return a > b ? b : a;
}
/////////////////////////
/////////////////////////
//ͨ�ú���
//�ص�����    �ع�ͷ�����õĺ���
int fun(int a, int b, int (*pfun)(int, int))
{
	//return (*pfun)(a,b)
	return pfun(a, b);//����һ�еļ�д
}

void main()
{
	int a = 10;
	int b = 20;
	int res = fun(a, b, Max);
	printf("res = %d\n", res);
}
*/
/*
int fun(int a, int b)
{
	return a + b;
}

//argc = argument count  ��������
//argv = argument value  ����ֵ
int main(int argc,char*argv[])
{
	int a, b;
	printf("input a and b:>");
	scanf("%d %d", &a, &b);
	int res = fun(a, b);
	printf("%d + %d = %d\n", a, b, res);
	return 0;
}
*/
/*
int fun(int a, int b)
{
	return a + b;
}
//argc = argument count  ��������
//argv = argument value  ����ֵ
//  0   1    2
// ADD  10   20
int main(int argc, char* argv[])
{
	int res = fun(atoi(argv[1]), atoi(argv[2]));  //atoi:���ַ���ת��������
	printf("%d + %d = %d\n", atoi(argv[1]), atoi(argv[2]), res);
	return 0;
}
*/