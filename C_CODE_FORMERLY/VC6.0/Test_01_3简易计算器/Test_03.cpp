#include<stdio.h>
#include<stdlib.h>

int Add(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}

int main()
{   
	system("mode con cols=30 lines=10");
	system("title 简易计算器");
	system("color 3f");
	int c = 1;
	int a, b,result,select;
	while (c)
	{
		printf("********************\n");
		printf("**[1]Add    [2]Sub**\n");
		printf("**[3]Mul    [4]Div**\n");
		printf("**[0]Quit\n");
		printf("********************\n");
		printf("请选择数字:\n");
		scanf("%d", &select);
		if (select == 0)
			break;
		printf("请输入a和b:");
		scanf("%d %d", &a, &b);
		switch (select)
		{
		case 1:
			result = Add(a, b);
			break;
		case 2:
			result = Sub(a, b);
			break;
		case 3:
			result = Mul(a, b);
			break;
		case 4:
			result = Div(a, b);
            break;	
		}
		printf("结果是:%d\n", result);
		system("pause");
		system("cls");//clear screen
	}
	return 0;
}