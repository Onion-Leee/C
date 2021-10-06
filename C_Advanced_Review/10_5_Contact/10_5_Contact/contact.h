#pragma once
#include<stdio.h>
#include<string.h>


#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 100
#define MAX_ADDR 100

#define MAX 1000

//类型的定义
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//通讯录
typedef struct Contact
{
	PeoInfo data[MAX];
	int sz;
}Contact;


//初始化通讯录
void InitContact(Contact*pc);
//添加通讯录函数
void AddContact(Contact*pc);

//删除函数
 void DeleteContact(Contact*pc);

// 查找函数
void SearchContact(Contact*pc);

//修改函数
void ModifyContact(Contact*pc);

//排序函数
void SortContact(Contact*pc);

//打印函数
void PrintContact(Contact*pc);