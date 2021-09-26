#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//3.模拟实现strstr
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 != NULL && str2 != NULL);
	char* cp = (char*)str1;
	char* substr = (char*)str2;
	char* s1 = NULL;

	if (*str2 == '\0')
		return NULL;
	 
	while (*cp)
	{
		s1 = cp;
		substr = str2;
		while (*s1 && *substr && (*s1 == *substr))
		{
			s1++;
			substr++;
		}
		if (*substr == '\0')
			return cp;
		cp++;
	}
}
int main()
{
	char str1[] = "This is a simple string";
	char* str2 = "simple";
	printf("%s\n", str1);
	char *str3 =  my_strstr(str1, str2);
	printf("%s\n", str3);
	return 0;
}

/*
//2.模拟实现memcpy函数
void* my_memcpy(void* dest, const void* src, size_t count)
{
	assert(dest != NULL && src != NULL);
	char* pdest = (char*)dest;
	char* psrc = (char*)src;
	while (count-- != 0)
	{
		*pdest++ = *psrc++;
	}
	return dest;

}
void main()
{
	char str1[] = "Helsoword";
	char str2[] = "ABC";
	printf("%s\n", str1);
	//memcpy(str1,str2,3);
	my_memcpy(str1, str2, 3);
	printf("%s\n", str1);

}
/*
/*
//1.模拟实现memmove函数
void* my_memmove(void* dest, const void* src, size_t count)
{
	assert(dest != NULL && src != NULL);
	char* pdest = (char*)dest;
	const char* psrc = (char*)src;
	if (psrc >= pdest || pdest >= psrc + count)
	{
		while (count-- != 0)
		{
			*pdest++ = *psrc++;
		}
	}
	else
	{
		pdest = pdest + count - 1;
		psrc = psrc + count - 1;
		while (count-- != 0)
		{
			*pdest-- = *psrc--;
		}
	}
	return dest;
}
void main()
{
	char str1[] = "Helsoword";
	char str2[] = "ABC";
	printf("%s\n", str1);
	//memmove(str1 + 3, str1, 4);
	my_memmove(str1 + 3, str1, 4);
	printf("%s\n", str1);

}
*/