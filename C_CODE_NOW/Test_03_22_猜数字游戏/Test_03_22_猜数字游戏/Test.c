#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void menu()
{
	printf("************************\n");
	printf("*****1.play  0.exit*****\n");
	printf("************************\n");

}
//RAND_MAX-32767
//rand����0-32767֮�������
//time���� �ܷ���һ��ʱ���
//ʱ���ָ���ǣ�������ڵ���time���������ʱ��ͼ������
//��ʼʱ�䣨1970.1.0:0:0:0����һ����ֵ����λ����
//time-t
#include<time.h>
void game()
{
	//1.��������һ�������
	int guess = 0;
	int ret = rand()%100+1; //�������������
	//printf("%d\n", ret);
	//2.������
	while (1)
	{
		printf("�������:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if(guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	//ֻ�ܵ���һ��-����Ƶ���Ķ���
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}
