
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>


//ջ�����ֲ�����+�����β�
//��������̬�ڴ濪�٣�malloc/calloc/free/realloc)
//��̬�������ݶΣ���ȫ�ֱ���+��̬����


//��Ҫע�����malloc�����ķ���ֵһ��Ҫ�����
int main()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		perror("main");
		return 0;
	}
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);
	}
	free(p);
	p = NULL;
	return 0;
}