//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//void menu()
//{
//	printf("****************Calc******************\n");
//	printf("**********1.Add******2.Sub************\n");
//	printf("**********3.Mul******4.Div************\n");
//	printf("****************Calc******************\n");
//	printf("请选择：  ");
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
//	while (1)
//	{
//	menu();
//	int n ;
//	scanf("%d", &n);
//	
//		switch (n)
//		{
//			int a = 0;
//			int b = 0;
//			int ret = 0;
//		case 1:
//			printf("请输入要计算的两个数字： ");
//			scanf("%d %d", &a, &b);
//			ret = add(a, b);
//			printf("计算结果为：%d\n", ret);
//			break;
//		case 2:
//			printf("请输入要计算的两个数字： ");
//			scanf("%d %d", &a, &b);
//			ret = sub(a, b);
//			printf("计算结果为：%d\n", ret);
//			break;
//		case 3:
//			printf("请输入要计算的两个数字： ");
//			scanf("%d %d", &a, &b);
//			ret = mul(a, b);
//			printf("计算结果为：%d\n", ret);
//			break;
//		case 4:
//			printf("请输入要计算的两个数字： ");
//			scanf("%d %d", &a, &b);
//			ret = div(a, b);
//			printf("计算结果为：%d\n", ret);
//			break;
//		default:printf("error\n");
//		}
//	}
//	return 0;
//}