#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>

#define DEFAULT_SZ 3
#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 25

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	CLEAR,
	SORT
};

//人的信息
typedef struct PeoInfo
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

//通讯录
typedef struct Contact
{
	PeoInfo* data;
	int sz;//有效元素的个数
	int capacity;//容量
}Contact;

void InitContact(Contact* pcon);
void ADD1(Contact* pcon);
void DEL1(Contact* pcon);
void SEARCH1(Contact* pcon);
void MODIFY1(Contact* pcon);
void SHOW1(Contact* pcon);
void CLEAR1(Contact* pcon);
void SORT1(Contact* pcon);
void SaveContact(Contact* pcon);
void LoadContact(Contact* pcon);
