#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include"contact.h"


void menu()
{
	printf("*********************************\n");
	printf("*****1.add                 2.delete    ******\n");
	printf("*****3.search            4.modify  ******\n");
	printf("*****5.sort                6.print       ******\n");
	printf("**********    0.exit    **************\n");
	printf("*********************************\n");
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
	do
	{
		menu();
		printf("请选择-》 ");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact();
			break;
		case DELETE:
			DeleteContact();
			break;
		case SEARCH:
			SearchContact();
			break;
		case MODIFY:
			ModifyContact();
			break;
		case SORT:
			SortContact();
			break;
		case PRINT:
			PrintContact();
			break;
		case EXIT:
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}