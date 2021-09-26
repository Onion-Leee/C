#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct stu
{
	char name[20];
	int age;
};

int qsort_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

int qsort_by_age(const
	void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}

void Swap(char* buff1, char* buff2, int width)
{
	for (int i = 0; i < width; i++)
	{
		char tmp = *buff1;
		*buff1 = *buff2;
		*buff2 = tmp;
		buff1++;

		buff2++;
	}
}
void bubble_sort(char* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
		}
	}
}

int main()
{
	struct stu s[3] = { {"wushangle",26},{"liyangqing",23},{"hujiarui",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	//通过姓名来进行排序
	bubble_sort(s, sz, sizeof(s[0]), qsort_by_name);

	//通过年龄来进行排序
	//bubble_sort(s, sz, sizeof(s[0]), qsort_by_age);
	return 0;
}