#pragma once

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 100
#define MAX_ADDR 100

#define MAX 1000

//���͵Ķ���
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//ͨѶ¼
typedef struct Contact
{
	PeoInfo data[MAX];
	int sz;
}Contact;