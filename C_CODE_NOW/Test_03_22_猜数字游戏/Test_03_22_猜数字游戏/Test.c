#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void menu()
{
	printf("************************\n");
	printf("*****1.play  0.exit*****\n");
	printf("************************\n");

}
//RAND_MAX-32767
//rand返回0-32767之间的数字
//time函数 能返回一个时间戳
//时间戳指的是：计算机在调用time函数的这个时间和计算机的
//起始时间（1970.1.0:0:0:0）的一个差值，单位是秒
//time-t
#include<time.h>
void game()
{
	//1.电脑生成一个随机数
	int guess = 0;
	int ret = rand()%100+1; //生成随机数函数
	//printf("%d\n", ret);
	//2.猜数字
	while (1)
	{
		printf("请猜数字:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if(guess<ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	//只能调用一次-不能频繁的定义
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
