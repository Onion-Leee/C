#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//int main()
//{
//	FILE* fpIn = fopen("Test.c", "r");
//	if (NULL == fpIn)
//	{
//		printf("����!\n");
//		return -1;
//	}
//	FILE* fpOut = fopen("Test2.txt", "w");
//	if (NULL == fpOut)
//	{
//		fclose(fpIn);
//		printf("����!\n");
//		return -1;
//	}
//
//	//����
//	char ch = fgetc(fpIn);
//	while (ch != EOF)
//	{
//		fputc(ch, fpOut);
//		ch = fgetc(fpIn);
//	}
//	fclose(fpIn);
//	fclose(fpOut);
//	return 0;
//}

/*
int main()
{
	FILE * fpIn = fopen("Test.c", "r");
	if (NULL == fpIn)
	{
		printf("����!\n");
		return -1;
	}
	FILE* fpOut = fopen("Test2.txt", "w");
	if (NULL == fpOut)
	{
		fclose(fpIn);
		printf("����!\n");
		return -1;
	}

	//����
	char ch = fgetc(fpIn);
	while (ch != EOF)
	{
		fputc(ch, fpOut);
		ch = fgetc(fpIn);
	}
	fclose(fpIn);
	fclose(fpOut);
	return 0;
}
*/
/*
void main()
{
	int ar[10] = { 0 };
	int sz = sizeof(ar) / sizeof(ar[0]);
	FILE* fp = NULL;
	//fp = fopen("Test.txt","r");
	fp = fopen("Test.txt", "rb");  //�Զ����Ƶ���ʽչ��
	if (NULL == fp)
	{
		printf("��ʧ��!");
		return;
	}
	//fwrite(ar, sizeof(int),sz,fp);
	fread(ar, sizeof(int), sz, fp);
	fclose(fp);
}

void main()
{
	int ar[9] = { 11,22,33,44 };
	FILE* fp = fopen("Test.txt", "a");
	if (NULL == fp)
	{
		printf("ʧ��!\n");
		return;
	}
	for (int i = 0; i < 9; i++)
	{
		//scanf("%d", &ar[i]);   //��׼����  -> ����
		fprintf(fp, "%d", ar[i]);
	}
	fclose(fp);
}


*/
//void main()
//{
//	int ar[9] = { 0 };
//	FILE* fp = fopen("Test.txt","r");
//	if (NULL == fp)
//	{
//		printf("ʧ��!\n");
//		return;
//	}
//	for (int i = 0; i < 9; i++)
//	{
//		//scanf("%d", &ar[i]);   //��׼����  -> ����
//		fscanf(fp, "%d", &ar[i]);
//	}
//	fclose(fp);
//}
//

/*
void main()
{
	int ar[] = { 1,2,4,5,6,7,8,9,0 };
	int sz = sizeof(ar) / sizeof(ar[0]);
	FILE* fp = NULL;
	//fp = fopen("Test.txt","r");
	fp = fopen("C:\\Users\\13279\\Desktop\\C\\Test.txt", "w");
	if (NULL == fp)
	{
		printf("��ʧ��!");
		return;
	}
	for (int i = 0; i < sz; ++i)
	{
		//printf("%d ", ar[i]);//��׼��� -> ��Ļ
		fprintf(fp, "%d ", ar[i]);   //�ض���
	}
	printf("\n");
	fclose(fp);
}
*/
#include<stdio.h>
int main()
{
	FILE* pFile;
	pFile = fopen("myfile.txt", "w");
	if (pFile != NULL)
	{
		fputs("fopen example", pFile);
		fclose(pFile);
	}
	return 0;
}