#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N_VALUES 5

//���ַ���ת�������͵ĺ���atoi()
void main()
{
	char* str =  "123";
	printf("%s\n", str);
	int value = atoi(str);
}

/*
//�����в���
//argc:argument count
//argu:argument value
void main(int argc,char *argv[])
{
	printf("argc = %d\n", argc);
	for (int i = 0; i < argc; ++i)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
}

//����ָ��
void main()
{
	int a = 10;
	int* p = &a;//һ��ָ��
	int** s = &p;//����ָ��
	printf("a addr = %p\n", &a);//a addr = 008FFB10
	printf("p value  = %p\n", p);//p value  = 008FFB10
	printf("p addr = %p\n", &p);//p addr = 008FFB04
	printf("s value = %p\n", s);//s value = 008FFB04
	printf("s addr = %p\n", &s);//s addr = 008FFAF8
}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int* p = arr; //ָ����������Ԫ�صĵ�ַ
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
		//&arr[0] = 006FF7AC <====> p+0 = 006FF7AC
		//......
	}
	return 0;
}

void main()
{
	float values[N_VALUES];
	float* vp;
	for (vp = &values[N_VALUES]; vp > & values[0];)
	{
		*--vp = 0;
	}
}

int my_strlen(char* str)
{
	char* start, * end;
	start = end = str;
	while (*end != '\0')
		end++;
	return end - start;
}
void main()
{
	char* str = "Hello Bit";
	int len = my_strlen(str);
	printf("len = %d\n", len);
}

#define N_VALUES 5
void main()
{
	float values[N_VALUES];
	float* vp;
	//ָ��+-������ָ��Ĺ�ϵ����
	for (vp = &values[0]; vp < &values[N_VALUES];)
	{
		//*vp++ = 0;
		*vp = 0;
		vp++;
	}
}

void main()
{
	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(ar) / sizeof(int);
	//��һ�ַ��������ڹ۲�
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ar[i]);
	}
	printf("\n");
	//�ڶ��ַ���
	int* p = ar;
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
	//�����ַ���,�������˳���
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", p[i]);
	}
	printf("\n");
}

void fun(int ar[]) //�����������˻�����ָ��
//void fun(int *ar)
{
	printf("in fun ar size  = %d\n", sizeof(ar));//4
}
void main()
{
	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("ar size = %d\n", sizeof(ar));//40
	fun(ar);
}


//��ֵ��һ
void main()
{
	int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%p\n", &ar[0]); //��Ԫ�صĵ�ַ
	printf("%p\n", ar); //������������
	printf("%p\n", &ar); //�����������ĵ�ַ
	printf("%d\n", sizeof(ar));//40

	printf("ar = %p,ar + 1 = %p\n", &ar[0], &ar[0] + 1);//ar = 00CFF878,ar + 1 = 00CFF87C
	printf("ar = %p,ar + 1 = %p\n", ar, ar + 1);//ar = 00CFF878,ar + 1 = 00CFF87C
	printf("ar = %p,ar + 1 = %p\n", &ar, &ar + 1);//ar = 00CFF878, ar + 1 = 00CFF8A0
}
*/