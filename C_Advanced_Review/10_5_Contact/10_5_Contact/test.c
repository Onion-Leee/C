#define _CRT_SECURE_NO_WARNINGS

#include"contact.h"


void menu()
{
	printf("*******************************\n");
	printf("*****1.add********2.delete ******\n");
	printf("*****3.search*****4.modify******\n");
	printf("*****5.sort*******6.print********\n");
	printf("**********0.exit****************\n");
	printf("*******************************\n");
}

enum Optation
{
	EXIT,
	ADD,
	DELETE,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};
int main()
{
	int input = 0;
//创建通讯录
	Contact con;//通讯录
	
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择-》 ");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DELETE:
			DeleteContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			printf("退出!\n");
			break;
		default:
			printf("输入有误\n");
			break;
		}
	} while (input);
	return 0;
}