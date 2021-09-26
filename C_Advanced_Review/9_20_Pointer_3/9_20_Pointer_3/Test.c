#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>


//Bubble sort
void Swap(char*buf1, char*buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//ģ��qsortʵ��һ��ð�������ͨ���㷨
void bubble_sort(void* base,int sz,int width,int (*cmp)(const void*e1, const void*e2) )
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//һ�˵�����
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�رȽ�
			//arr[j] arr[j+1]
			if (cmp( (char*)base+j*width, (char*)base+(j+1)*width )>0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}


void test4()
{
	//ʹ��qsort��������ṹ������
	struct Stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };

	int sz = sizeof(s) / sizeof(s[0]);
	//��������������
	//bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
	//��������������
	bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
}


