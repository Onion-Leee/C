#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
​
void menu()
{
	printf("******************************\n");
	printf("** 1. add   2. del **\n");
	printf("** 3. search 4. modify **\n");
	printf("** 5. show  6. clear **\n");
	printf("** 7. sort  0. exit **\n");
	printf("******************************\n");
}
int main()
{
	int n = 0;
	Contact con;
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &n);
		switch (n)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			FindContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case CLEAR:
			ClearContact(&con);
			break;
		case EXIT:
			printf("退出程序\n");
			return 0;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
	} while (n);
	return 0;
}

