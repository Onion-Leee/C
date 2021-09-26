#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

char* my_strstr(const char* arr1, const char* arr2)
{
	assert(arr1 && arr2);
	const char* s1 = arr1;
	const char* s2 = arr2;
	const char* s3 = s1;

	if (*arr2 == NULL)
	{
		return (char*)arr1;
	}
	while (*s3)
	{
		s2 = arr2;
		s1 = s3;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == NULL)
		{
			return (char*)s3;
		}
		s3++;
	}
	return NULL;
}

int main()
{
	char* ret = NULL;
	char arr1[20] = "abcdddcfe";
	char arr2[] = "ddc";
	//ret = strstr(arr1, arr2);
	//模拟实现这个函数
	ret = my_strstr(arr1, arr2);
	printf("%s\n", ret);
	return 0;
}