#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//考虑内存覆盖的情形----反向拷贝
void* my_memcpy(void* dest, const void* src, size_t count)
{
	assert(dest != NULL && src != NULL);
	char* pdest = (char*)dest;
	const char* psrc = (char*)src;

	//1.无覆盖
	if (psrc >= pdest || pdest >= psrc + count)
	{
		while (count-- != 0)
		{
			*pdest++ = *psrc++;
		}

	}
	//2.有覆盖
	else
	{
		pdest = pdest + count -1;
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
	char ar1[] = "helsoword";
	char ar2[] = "ABC";
	printf("%s\n", ar1);
	//memcpy(ar1, ar2, 3);
	my_memcpy(ar1 + 3, ar1, 4);
	printf("%s\n", ar1);
}

/*
int my_memcmp(const void* buf1, const void* buf2, size_t count)
{
	assert(buf1 != NULL && buf2 != NULL);
	const char* pbuf1 = (char*)buf1;
	const char* pbuf2 = (char*)buf2;

	int res = 0;
	while (count-- != 0)
	{
		if ((res = *pbuf1 - *pbuf2) != 0)
			break;
		pbuf1++;
		pbuf2++;
	}
	if (res > 0)
		res = 1;
	else if (res < 0)
		res = -1;
	return res;
}
*/
/*
void* my_memset(void* dest, int c, size_t count)
{
	assert(dest != NULL);
	char* pdest = (char*)dest;
	while (count-- != 0)
	{
		*pdest++ = c;
	}
	return pdest;
}
void main()
{
	char buffer[10];
	memset(buffer, 0, sizeof(char) * 10);
	my_memset(buffer, 0, sizeof(char) * 10);
}
*/

/*
void main()
{
	int ar[10];
	memset(ar, 0, sizeof(int) * 10);  //以字节为单位
}

int main()
{
	char* p = "zhangpengwei@bitedu.tech";
	const char* sep = ".@";
	char arr[30];
	char* str = NULL;
	strcpy(arr, p);//将数据拷贝一份，处理arr数组的内容
	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
	{
		printf("%s\n", str);
	}
	return 0;
}


int main()
{
	char str[] = "- This, a sample string.";
	char* pch;
	printf("Splitting string \"%s\" into tokens:\n", str);
	pch = strtok(str, " ,.-");
	while (pch != NULL)
	{
		printf("%s\n", pch);
		pch = strtok(NULL, " ,.-");
	}
	return 0;
}

int main()
{
	char str[] = "This is a simple string";
	char* pch;
	assert(pch);
	pch = strstr(str, "simple");
	strncpy(pch, "sample", 6);
	puts(str);
	return 0;
}
*/