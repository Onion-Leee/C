#include "contact.h"

void CheckCapacity(Contact* pcon)
{
	if (pcon->sz == pcon->capacity)
	{
		//每次扩容双倍
		PeoInfo* ptr = realloc(pcon->data, (pcon->capacity * 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pcon->data = ptr;
			pcon->capacity *= 2;
			printf("增容成功\n");
		}
	}
}
void DestroyContact(Contact* pcon)
{
	free(pcon->data);
	pcon->data = NULL;
	pcon->capacity = 0;
	pcon->sz = 0;
}
//初始化通讯录
void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	//memset(pcon->data, 0, sizeof(pcon->data));
	pcon->data = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo)); //分配默认大小并清空
	if (pcon->data == NULL) //检查分配是否成功
	{
		printf("%s\n", strerror(errno));
		return;
	}
	pcon->capacity = DEFAULT_SZ;
	LoadContact(pcon);
}

//添加
void ADD1(Contact* pcon)
{
	assert(pcon);
	CheckCapacity(pcon);
	printf("请输入名字：");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("请输入年龄：");
	scanf("%d", &(pcon->data[pcon->sz].age));
	printf("请输入性别：");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("请输入电话：");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("请输入地址：");
	scanf("%s", pcon->data[pcon->sz].addr);

	pcon->sz++;
	printf("增加成功\n");
}

//查找1
static int SEARCH2(Contact* pcon, char name)
{
	int i = 0;
	assert(pcon);
	for (int i = 0; i < pcon->sz; i++)
	{
		if (0 == strcmp(pcon->data[i].name, name));
		{
			return i;
		}
	}
	//找不到
	return -1;
}

//删除
void DEL1(Contact* pcon)
{
	int i = 0;
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	assert(pcon);
	if (pcon->sz == 0)
	{
		printf("通讯录已空，无法删除\n");
		return;
	}
	//删除
	printf("请输入要删除的人的名字:");
	scanf("%s", name);
	//删除之前先查找
	pos = SEARCH2(pcon, name);
	if (pos == -1)
	{
		printf("要删除的条目不存在\n");
		return;
	}
	//移除
	for (i = pos; i < pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i + 1];
	}
	pcon->sz--;
	printf("删除成功\n");
}
//查找指定联系人信息
void SEARCH1(Contact* pcon)
{
	int i = 0;
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	assert(pcon);
	if (pcon->sz == 0)
	{
		printf("通讯录已空，无法查找\n");
		return;
	}
	//查找
	printf("请输入要查找人的名字 ：");
	scanf("%s", name);
	pos = SEARCH2(pcon, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
		return;
	}
	printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data);
	pcon->data[pos].age;
	pcon->data[pos].sex;
	pcon->data[pos].tele;
	pcon->data[pos].addr;
}

//修改
void MODIFY1(Contact* pcon)
{
	int i = 0;
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	assert(pcon);

	if (pcon->sz == 0)
	{
		printf("请输入要修改的条目的姓名：");
		scanf("%s", name);
		//修改之前需要先查找
		pos = SEARCH2(pcon, name);
		if (pos == -1)
		{
			printf("要修改的条目不存在\n");
			return;
		}
		//询问要修改什么
		printf("请输入要修改什么信息(1-名字,2-年龄,3-性别,4-电话,5-地址)");
		int msg;
		scanf("%d", &msg);
		switch (msg)
		{
		case1:
			printf("请输入新的名字:");
			scanf("%s", pcon->data[pos].name);
			break;
		case2:
			printf("请输入新的年龄:");
			scanf("%d", pcon->data[pos].age);
			break;
		case3:
			printf("请输入新的性别:");
			scanf("%s", pcon->data[pos].sex);
			break;
		case4:
			printf("请输入新的电话:");
			scanf("%s", pcon->data[pos].tele);
			break;
		case5:
			printf("请输入新的地址:");
			scanf("%s", pcon->data[pos].addr);
			break;
		default:
			printf("输入有误\n");
			return;
		}
		printf("修改成功\n");
	}
}

//显示
void SHOW1(const Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%15s\t%5d\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data);
		pcon->data[i].age;
		pcon->data[i].sex;
		pcon->data[i].tele;
		pcon->data[i].addr;
	}
}

//清空
void CLEAR1(Contact* pcon)
{
	InitContact(pcon);
}

//排序
void SORT1(Contact* pcon)
{
	int i = 0;
	int j = 0;
	PeoInfo tmp;
	for (int i = 0; i < pcon->sz - 1; i++)
	{
		for (j = 0; j < pcon->sz - 1 - i; j++)
		{
			if (0 < strcmp(pcon->data[j].name, pcon->data[j + 1].name))
			{
				tmp = pcon->data[j];
				pcon->data[j] = pcon->data[j + 1];
				pcon->data[j + 1] = tmp;
			}
		}
	}
}
void LoadContact(Contact* pcon)
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("加载信息：打开文件失败\n");
		return;
	}
	//加载信息
while(fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		CheckCapacity(pcon);
		pcon->data[pcon->sz] = tmp;
		pcon->sz++;
	}
	​fclose(pfRead);
	pfRead = NULL;
}​
void SaveContact(Contact* pcon)
{
	int i = 0;
	FILE* pfWrite = fopen("contact.dat","wb");
	if(pfWrite == NULL)
	{
		printf("保存信息：打开文件失败\n");
		return;
	}
	//保存信息
	for(int i = 0; i < pcon->sz; i++)
	{
		fwrite(pcon->data + i, sizeof(PeoInfo), 1, pfWrite);
	}
    //关闭文件
	fclose(pfWrite);
	pfWrite = NULL;
}