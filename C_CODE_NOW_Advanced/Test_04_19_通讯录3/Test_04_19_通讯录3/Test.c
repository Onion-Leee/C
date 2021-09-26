#include "contact.h"
void menu()
{
	printf("****************************\n");
	printf("***1. Add      2.Del     ***\n");
	printf("***3. Search   4.Modify  ***\n");
	printf("***5. Show     6.Clear   ***\n");
	printf("***7. Sort     0.Exit    ***\n");
	printf("****************************\n");
}
int main()
{
	int input = 0;
	Contact con;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			ADD1(&con);
			break;
		case 2:
			DEL1(&con);
			break;
		case 3:
			SEARCH1(&con);
			break;
		case 4:
			MODIFY1(&con);
			break;
		case 5:
			SHOW1(&con);
			break;
		case 6:
			CLEAR1(&con);
			break;
		case 7:
			SORT1(&con);
			break;
		case 0:
			SaveContact(&con);
			DestroyContact(&con); //退出时销毁
			printf("退出程序\n");
			return 0;
		default:
			printf("输入有误，请重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}