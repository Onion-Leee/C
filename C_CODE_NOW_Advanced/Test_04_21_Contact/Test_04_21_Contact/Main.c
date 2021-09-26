#include"Contact.h"


//菜单
void menu()
{
	printf("***********通讯录***********\n");
	printf("***1.ADD         2.DEL   ***\n");
	printf("***3.FIND        4.MODIFY***\n");
	printf("***5.SHOW        6.CLEAR ***\n");
	printf("***7.SORT        0.QUIT  ***\n");
	printf("****************************\n");

}

int main(int argc, char* argv)
{
	Contact con;
	InitContact(&con);
	int select = 1;
	while (select)
	{
		menu();
		printf("请选择:>");
		scanf("%d", &select);
		if (select == QUIT)
			break;
		switch (select)
		{
		case ADD:
			AddPeople(&con);
			break;
		case DEL:
			break;
		case FIND:
			FindPeople(&con);
			break;
		case MODIFY:
			break;
		case SHOW:
			ShowPeople(&con);
			break;
		case CLEAR:
			break;
		case SORT:
			break;
		default:
			printf("输入有误，请重新输入.\n");
			break;
		}
	}
	return 0;
}