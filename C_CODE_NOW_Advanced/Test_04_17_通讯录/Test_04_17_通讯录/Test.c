#define _CRT_SECURE_NO_WARNINGS
#include"Contact.h"
void menu()
{
	printf("****************************\n");
	printf("***1. Add      2.Del     ***\n");
	printf("***3. Search   4.Modify  ***\n");
	printf("***5. Show     6.Clear   ***\n");
	printf("***7. Sort     0.Exit    ***\n");
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("«Î—°‘Ò£∫");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		}
	} while (input);
	return 0;
}