#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<errno.h>
#include<assert.h>

//int main()
//{
//	FILE* fl = fopen("text.c", "r");
//	if (fl == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		//perror("fopen");
//		return 1;
//	}
//	fclose(fl);
//	fl = NULL;
//	return 0;
//}

//int main()
//{
//	char ch[20] = { 0 };
//	scanf("%s", ch);
//	int i = 0;
//	while (ch[i] != '\0')
//	{
//		if (isupper(ch[i]))
//		{
//			ch[i] = tolower(ch[i]);
//		}
//		printf("%c ", ch[i]);
//		i++;
//	}
//	return 0;
//}


//模拟实现memcpy函数

//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//  assert(dest&&src);
//	char* tmp = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//
//	}
//	return tmp;
//}
//
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int arr2[20] = { 0 };
//	//int* ret = memcpy(arr2, arr1, 20);
//	int ret = my_memcpy(arr2, arr1, 20);
//	return 0;
//}

//模拟实现memmove
void* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}


int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
	//int* ret = memmove(arr1+2, arr1, 20);
	int ret = my_memmove(arr1, arr1+2, 20);
	return 0;
}