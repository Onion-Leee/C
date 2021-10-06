#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

//��ʼ������
void InitContact(Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}


//���ͨѶ¼����
void AddContact(Contact* pc)
{
	if (pc->sz > MAX)
	{
		printf("ͨѶ¼�������޷���ӣ�\n");
		return;
	}
	printf("����������:->");
	scanf("%s", pc->data[pc->sz].name);
	printf("�������Ա�:->");
	scanf("%s", pc->data[pc->sz].sex);
	printf("����������:->");
	scanf("%d", &pc->data[pc->sz].age);
	printf("������绰:->");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:->");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("������!\n");
}

//��ӡ����
void PrintContact(const Contact* pc)
{
	int i = 0;
	printf("%-6s\t%-5s\t%-5s\t%-20s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-6s\t%-5s\t%-5d\t%-20s\t%-20s\n",
			pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

int  FindContact(Contact* pc, char name[])
{
	for (int i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
//ɾ������
void DeleteContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	printf("������Ҫɾ��������:->");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	for (int i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("ɾ���ɹ�!\n");
}

//���Һ���
void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	printf("������Ҫ���ҵ�����:->");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	printf("���ҳɹ�,���ҽ��Ϊ��\n");
	printf("%-6s\t%-5s\t%-5s\t%-20s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	printf("%-6s\t%-5s\t%-5d\t%-20s\t%-20s\n",
		pc->data[pos].name,
		pc->data[pos].sex,
		pc->data[pos].age,
		pc->data[pos].tele,
		pc->data[pos].addr);
}

//�޸ĺ���
void ModifyContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷��޸�\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸ĵ�����:->");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	printf("������Ҫ�޸ĵ�����:->");
	scanf("%s", pc->data[pos].name);
	printf("������Ҫ�޸ĵ��Ա�:->");
	scanf("%s", pc->data[pos].sex);
	printf("������Ҫ�޸ĵ�����:->");
	scanf("%d", &pc->data[pos].age);
	printf("������Ҫ�޸ĵĵ绰:->");
	scanf("%s", pc->data[pos].tele);
	printf("������Ҫ�޸ĵĵ�ַ:->");
	scanf("%s", pc->data[pos].addr);
	printf("�޸ĳɹ�!\n");
}


void SortContactby_Age(Contact* pc)
{
	//ð������
	for (int i = 0; i < pc->sz; i++)
	{
		for (int j = 0; j < pc->sz - 1 - i; j++)
		{
			if (pc->data[j].age > pc->data[j + 1].age)
			{
				int temp = pc->data[j].age;
				pc->data[j].age = pc->data[j + 1].age;
				pc->data[j + 1].age = temp;
			}
		}
	}
}
//������
void SortContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ���޷���������!\n");
		return;
	}
	printf("����ǰΪ��\n");
	PrintContact(pc);
	SortContactby_Age(pc);
	printf("�����Ϊ��\n");
	PrintContact(pc);
}