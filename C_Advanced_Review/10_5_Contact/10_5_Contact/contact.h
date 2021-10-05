#pragma once

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