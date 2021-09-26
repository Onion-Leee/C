#include<stdio.h>
#include<stdbool.h>

bool IsLeep(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return true;
	return false;
}

int main()
{
	int year, month, day;
	int c = 1;
	bool flag;
	while (c)
	{
		printf("请输入年月...\n");
		scanf_s("%d %d", &year, &month);
		switch (month)
	/*	{
		case 1:
			day = 31;
			break;
		case 2:
			day = 30;
			break;
		case 3:
			day = 31;
			break;
		case 4:
			day = 30;
			break;
		case 5:
			day = 31;
			break;
		case 6:
			day = 30;
			break;
		case 7:
			day = 31;
			break;
		case 8:
			day = 31;
			break;
		case 9:
			day = 30;
			break;
		case 10:
			day = 31;
		case 11:
			day = 30;
			break;
		case 12:
			day = 31;
			break;
		}   */
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			day = 31;
			break;
		case 2:
			flag = IsLeep(year);
			//if (flag == true)
			if (flag)//判断真假来决定是true还是false
				day = 29;
			else
				day = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			day = 30;
			break;
		
		}
        printf("day = %d\n", day);
		system("pause");
		system("cls");
	}
	return 0;
}