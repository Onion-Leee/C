//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS 
//
//void menu()
//{
//	printf("****************Calc******************\n");
//	printf("**********1.Add******2.Sub************\n");
//	printf("**********3.Mul******4.Div************\n");
//	printf("****************Calc******************\n");
//	printf("��ѡ��  ");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int n = 0;
//	do
//	{
//		menu();
//		int (*parr[5])(int, int) = { NULL,add,sub,mul,div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		scanf("%d", &n);
//		if (n >= 1 && n <= 4)
//		{
//			printf("�������������֣�\n");
//			scanf("%d %d", &x, &y);
//			ret = (parr[n])(x, y);
//			printf("������Ϊ = %d\n", ret);
//		}
//		else if (n == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//			printf("ѡ�����\n");
//		
//	} while (n);
//	return 0;
//}