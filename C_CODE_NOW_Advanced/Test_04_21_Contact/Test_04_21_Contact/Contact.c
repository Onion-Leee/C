#include "Contact.h"

//初始化
void InitContact(Contact* pc)
{
	assert(pc != NULL);
	pc->capacity = DEFAULT_CONTSCT_SIZE;
	pc->data = (People*)malloc(sizeof(People) * pc->capacity);
	assert(pc->data != NULL);
	memset(pc->data, 0, sizeof(People) * pc->capacity);
	pc->size = 0;
	//LoadContact(pc);
}
//检查容量函数
static void CheckCapacity(Contact* pc)
{
	if (pc->size >= pc->capacity)
	{
		//空间满了
		//People* new_data = (People*)malloc(sizeof(People) * pc->capacity * 2);
		People* new_data = (People*)ralloc(pc->data,sizeof(People) * pc->capacity * 2);
		assert(new_data != NULL);
		pc->capacity *= 2;
		pc->data = new_data;
		printf("扩容成功......\n");
	}
}
//添加函数
void AddPeople(Contact* pc)
{
	assert(pc != NULL);
	//检查容量
	//CheckCapacity(pc);
	printf("请输入要添加的人的信息:>\n");
	printf("姓名  性别  年龄  电话  地址\n");
	/*printf("姓名:>");
	scanf("%s", pc->data[pc->size].name);
	printf("性别:>");
	scanf("%s", pc->data[pc->size].sex);
	printf("年龄:>");
	scanf("%d", &(pc->data[pc->size].age));
	printf("电话:>");
	scanf("%s", pc->data[pc->size].tel);
	printf("地址:>");
	scanf("%s", pc->data[pc->size].addr);
	printf("添加成功.\n");*/

	scanf("%s%s%d%s%s",
		pc->data[pc->size].name,
		pc->data[pc->size].sex,
		&(pc->data[pc->size].age),
		pc->data[pc->size].tel,
		pc->data[pc->size].addr);
	printf("添加成功.\n");
	pc->size++;
	//printf("%s %s %d %s %s", pc->data[size].name);
}
//显示
void ShowPeople(Contact* pc)
{
	assert(pc != NULL);
	printf("*************************************************\n");
	printf("%-10s%-8s%-8s%-14s%-30s\n", "姓名", "性别", "年龄", "电话", "住址");
	//printf("%s", pc->data[pc->size].name);
	for (size_t i = 0; i < pc->size; ++i)
	{
		printf("%-10s%-8s%-8d%-14s%-30s\n",
			pc->data[i].name,
			pc->data[i].sex,
			pc->data[i].age,
			pc->data[i].tel,
			pc->data[i].addr);
	}
	printf("*************************************************\n");
}
//查找
void FindPeople(Contact* pc)
{
	if (pc->size == 0)
	{
		printf("通讯录为空，不可查询...\n");
		return;
	}
	char ch[10] = { 0 };
	printf("请输入要查找的姓名:");
	scanf("%s", &ch);
	for (size_t i = 0; i < pc->size; ++i)
	{
		if (strcmp(pc->data[i].name, ch) == 0)
		{
			printf("查找成功...\n");
			printf("*************************************************\n");
			printf("%-10s%-8s%-8s%-14s%-30s\n", "姓名", "性别", "年龄", "电话", "住址");
			printf("%-10s%-8s%-8d%-14s%-30s\n",
				pc->data[i].name,
				pc->data[i].sex,
				pc->data[i].age,
				pc->data[i].tel,
				pc->data[i].addr);
			printf("*************************************************\n");
			return;
		}
		printf("查找失败...\n");
	}

}