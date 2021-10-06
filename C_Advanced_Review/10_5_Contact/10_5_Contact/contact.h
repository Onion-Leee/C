#pragma once
#include<stdio.h>
#include<string.h>


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


//��ʼ��ͨѶ¼
void InitContact(Contact*pc);
//���ͨѶ¼����
void AddContact(Contact*pc);

//ɾ������
 void DeleteContact(Contact*pc);

// ���Һ���
void SearchContact(Contact*pc);

//�޸ĺ���
void ModifyContact(Contact*pc);

//������
void SortContact(Contact*pc);

//��ӡ����
void PrintContact(Contact*pc);