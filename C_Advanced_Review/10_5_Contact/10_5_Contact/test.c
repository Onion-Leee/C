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
//����ͨѶ¼
	Contact con;//ͨѶ¼
	
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��-�� ");
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
			printf("�˳�!\n");
			break;
		default:
			printf("��������\n");
			break;
		}
	} while (input);
	return 0;
}