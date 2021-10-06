#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

//初始化函数
void InitContact(Contact* pc)
{
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}


//添加通讯录函数
void AddContact(Contact* pc)
{
	if (pc->sz > MAX)
	{
		printf("通讯录已满，无法添加！\n");
		return;
	}
	printf("请输入姓名:->");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入性别:->");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入年龄:->");
	scanf("%d", &pc->data[pc->sz].age);
	printf("请输入电话:->");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:->");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("添加完成!\n");
}

//打印函数
void PrintContact(const Contact* pc)
{
	int i = 0;
	printf("%-6s\t%-5s\t%-5s\t%-20s\t%-20s\n", "姓名", "性别", "年龄", "电话", "地址");
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
//删除函数
void DeleteContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	printf("请输入要删除的姓名:->");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	for (int i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功!\n");
}

//查找函数
void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	printf("请输入要查找的姓名:->");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	printf("查找成功,查找结果为：\n");
	printf("%-6s\t%-5s\t%-5s\t%-20s\t%-20s\n", "姓名", "性别", "年龄", "电话", "地址");
	printf("%-6s\t%-5s\t%-5d\t%-20s\t%-20s\n",
		pc->data[pos].name,
		pc->data[pos].sex,
		pc->data[pos].age,
		pc->data[pos].tele,
		pc->data[pos].addr);
}

//修改函数
void ModifyContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法修改\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改的姓名:->");
	scanf("%s", name);
	int pos = FindContact(pc, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
		return;
	}
	printf("请输入要修改的姓名:->");
	scanf("%s", pc->data[pos].name);
	printf("请输入要修改的性别:->");
	scanf("%s", pc->data[pos].sex);
	printf("请输入要修改的年龄:->");
	scanf("%d", &pc->data[pos].age);
	printf("请输入要修改的电话:->");
	scanf("%s", pc->data[pos].tele);
	printf("请输入要修改的地址:->");
	scanf("%s", pc->data[pos].addr);
	printf("修改成功!\n");
}


void SortContactby_Age(Contact* pc)
{
	//冒泡排序
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
//排序函数
void SortContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空无法进行排序!\n");
		return;
	}
	printf("排序前为：\n");
	PrintContact(pc);
	SortContactby_Age(pc);
	printf("排序后为：\n");
	PrintContact(pc);
}