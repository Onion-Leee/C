#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> //system();ִ��ϵͳ����-cls-������Ļ��Ϣ
#include<Windows.h>//Sleep();˯�ߺ�������λ�Ǻ���
#include<string.h>

#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 6;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ���,�±���%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ�����.\n");
	}
	return 0;
}
/*
//goto���
//�ػ�����
int main()
{
	//�ػ�
	//shutdown -s -t 60
	char input[100] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ĵ�����һ�����ڹػ���������룺��������ȡ���ػ�\n");
	printf("������:");
	scanf("%s,input");
	if (0 == strcmp(input,"������"))
	{
		system("shutdown -a");//ȡ���ػ�
	}
	else
	{
		goto again;
	}
}
*/
//��������Լ�������ͷ�ļ�
//#include"test.h"
//������ÿ������ͷ�ļ�
//#include<stdio.h>

/*
//��д����ʵ�֣�ģ���û���¼�龰��
//����ֻ�ܵ�¼���Ρ���ֻ���������������룬
//���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; ++i)
	{
		printf("����������:");
		scanf("%s", password);

		//�ж�
		//�����ַ����Ƚϲ���ֱ����==��
		//��Ӧ��ʹ��strcmp(),stringcompare
		if (0==strcmp(password,"123456"))
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("��¼ʧ��\n");
		}
	}
	if (i == 3)
	{
		printf("������������ʧ�ܣ��˳�");
	}
	return 0;
 }
 */


 /*
 // ��д���룬��ʾ����ַ��������ƶ������м���
 int main()
 {
	 char arr[] = "bit";
	 char arr1[] = "welcome to bit!!!!!!!!";
	 char arr2[] = "######################";
	 int len = strlen(arr1);
	 int left = 0;
	 int right = len - 1;

	 while (left <= right)
	 {
		 arr2[left] = arr1[left];
		 arr2[right] = arr1[right];
		 printf("%s\n", arr2);
		 Sleep(1000);//˯�ߺ�������λ�Ǻ���
		 system("cls");//ִ��ϵͳ����-cls-������Ļ��Ϣ
		 left++;
		 right--;
	 }
	 printf("%s\n", arr2);
	 return 0;
 }
 */

 /*
 //��һ�����������в��Ҿ����ĳ������n��
 //��дint binsearch(int x, int v[], int n);
 //���ܣ���v[0]<= v[1] <= v[2] <= ��. <= v[n - 1]�������в���x
 //�������۰����/���ֲ���
 #include<stdio.h>
 int main()
 {
	 int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	 int k = 17;
	 int sz = sizeof(arr) / sizeof(arr[0]);
	 int left = 0;
	 int right = sz - 1;
	 while (left <= right)
	 {
		 int mid = (left + right) / 2;
		 if (arr[mid] < k)
		 {
			 left = mid + 1;
		 }
		 else if (arr[mid] > k)
		 {
			 right = mid - 1;
		 }
		 else
		 {
			 printf("�ҵ���,�±���:%d\n", mid);
			 break;
		 }
	 }
	 if (left > right)
	 {
		 printf("�Ҳ�����.\n");
	 }
	 return 0;
 }
 */
 //����һ
   /*
 int main()
 {
	 int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	 int k = 7;
	 int sz = sizeof(arr) / sizeof(arr[0]);
	 int i = 0;
	 for (i = 0; i < sz; i++)
	 {
		 if (arr[i] == k)
		 {
			 printf("�ҵ���,�±���:%d\n", i);
			 break;
		 }
	 }
	 if (i == sz)
	 {
		 printf("�Ҳ�����\n");
	 }
	 return 0;
 }*/