
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

	return 0;
}