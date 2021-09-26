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

//模仿qsort实现一个冒泡排序的通用算法
void bubble_sort(void* base,int sz,int width,int (*cmp)(const void*e1, const void*e2) )
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟的排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素比较
			//arr[j] arr[j+1]
			if (cmp( (char*)base+j*width, (char*)base+(j+1)*width )>0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}


void test4()
{
	//使用qsort函数排序结构体数据
	struct Stu s[3] = { {"zhangsan", 30},{"lisi", 34},{"wangwu", 20} };

	int sz = sizeof(s) / sizeof(s[0]);
	//按照年龄来排序
	//bubble_sort(s, sz, sizeof(s[0]), sort_by_age);
	//按照名字来排序
	bubble_sort(s, sz, sizeof(s[0]), sort_by_name);
}


