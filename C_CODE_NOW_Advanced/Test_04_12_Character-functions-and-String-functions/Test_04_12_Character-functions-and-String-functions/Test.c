#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//ģ��ʵ��
//size_t strlen(const char* string);
//char *strcpy( char *strDestination, const char *strSource );
//char *strcat( char *strDestination, const char *strSource );
//int strcmp( const char *string1, const char *string2 );

int my_strcmp(const char* string1, const char* string2)
{
	assert(string1 != NULL && string2 != NULL);
	while (*string1 != '\0' && *string2 != '\0')
	{
		if (*string1 > * string2)
			return 1;
		else if (*string1 < *string2)
			return -1;
		string1++;
		string2++;
	}
	if (*string1 != '\0')
		return 1;
	else if (*string2 != '\0')
		return -1;
	return 0;
}
int my_strcmp1(const char* string1, const char* string2)
{
	assert(string1 != NULL && string2 != NULL);
	int res = 0;
	while (*string1 != '\0' || *string2 != '\0')
	{
		//ͨ�������ķ�ʽ��ɱȽ�
		if ((res = *string1 - *string2) != 0)
			break;
		string1++;
		string2++;
	}
	if (res > 0)
		res = 1;
	else if (res < 0)
		res = -1;
	return res;
}
void main()
{
	char* str1 = "HelloBitab";
	char* str2 = "HelloBitab";
	int res = my_strcmp1(str1, str2);
	printf("res = %d\n", res);
}


/*
char* my_strcat(char* strDestination, const char* strSource)
{
	//Ҫ�жϲ�������Ч��
	assert(strDestination != NULL && strSource != NULL);
	//��������
	char* pDest = strDestination;
	while (*pDest != '\0')
		pDest++;
	while (*strSource != '\0')
		*pDest++ = *strSource++;

	*pDest = '\0';
	return strDestination;
}
void main()
{
	char str1[20] = "HelloBit";
	char* str2 = "Linux";
	printf("str1 = %s\n", str1);
	char* res = my_strcat(str1, str2);
	printf("str1 = %s\n", res);
}
*/
/*
char* my_strcpy(char* strDestination, const char* strSource)
{
	//Ҫ�жϲ�������Ч��
	assert(strDestination != NULL && strSource != NULL);
	//��������
	char* pDest = strDestination;
	while (*strSource != '\0')
	{
		*pDest++ = *strSource++;
		//strDestination++;
		//strSource++;
	}
	//�����һ��'\0����ֵ��ȥ
	*pDest = '\0';
	return strDestination;
}
void main()
{
	char str1[20] = "HelloBit";
	char* str2 = "Linux";
	printf("str1 = %s\n", str1);
	//strcpy(str1, str2);
	char *res = my_strcpy(str1, str2);
	printf("str1 = %s\n", res);
}
*/
/*
size_t my_strlen(const char* string)
{
	//Ҫ�жϲ�������Ч��
	assert(string != NULL);
	size_t count = 0;
	while (*string != '\0')
	{
		count++;
		string++;
	}
	return count;
}
//��������ʱ����   �õݹ�
size_t my_strlen1(const char* string)
{
	//Ҫ�жϲ�������Ч��
	assert(string != NULL);
	if (*string == '\0')
	{
		return 0;
	}
	return my_strlen1(string + 1) + 1;
}
void main()
{
	char* str = "Hello bit";
	printf("strlen = %d\n", strlen(str));
	printf("my_strlen = %d\n", my_strlen1(str));

}
*/

/*
void main()
{
	char str1[20] = "HelloLinux";
	char* str2 = "Bit";    //�ὫԴ�ַ����е� '\0' ������Ŀ��ռ�
	printf("str1 = %s\n", str1);
	strcpy(str1, str2);
	printf("str1 = %s\n", str1);
}

int main()
{
	const char* str1 = "abcdef";
	const char* str2 = "bbb";

	//size_t strlen(const char* string);

	if (strlen(str2) - strlen(str1) > 0)  //stelen�ķ���ֵ���޷��ŵ�  �޷��ŵ������������������޷��ŵ�  >0
	{
		printf("str2>str1\n");
	}
	else
	{
		printf("srt1>str2\n");
	}
	return 0;
}

void main()
{
	char str[] = "Hello bit";
	printf("str len = %d\n", strlen(str));  //����   9
	printf("str size = %d\n", sizeof(str)); //��С   10
	char str1[] = { 'H','e','l','l','o' };
	printf("str1 len = %d\n", strlen(str1));  //����  ���ֵ
	printf("str1 size = %d\n", sizeof(str1)); //��С  5
	char str2[10] = { 'H','e','l','l','o' };
	printf("str2 len = %d\n", strlen(str2));  //����  5   \0��������0  o��һ������0
	printf("str2 size = %d\n", sizeof(str2)); //��С  10
}


void main()
{
	char* str = "Hello";
	printf("str len = %d\n", strlen(str));  //����   5
	printf("str size = %d\n", sizeof(str)); //��С   4
}

void main()
{
	size_t sz = 0;
	unsigned int sz1 = 0;    //���ߵȼ�
}
*/