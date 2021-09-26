#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
typedef enum
{
	QUIT,
	ADD,
	DEL,
	FIND,
	MODIFY,
	SHOW,
	CLEAR,
	SORT
};
#define DEFAULT_CONTSCT_SIZE 2
#define NAME_SIZE 20 
#define SEX_SIZE 10
#define ADDR_SIZE 256
//每个人的信息结构体
typedef struct People
{
	char name[NAME_SIZE];
	char sex[SEX_SIZE];
	short  age;
	char tel[12];
	char addr[ADDR_SIZE];
}People;
//通讯录结构体
#define DATA_SIZE 1000
typedef struct Contact
{
	//People data[DATA_SIZE]
	People *data;
	size_t size;
	size_t capacity;
}Contact;

void InitContact(Contact* pc);
void AddPeople(Contact* pc);
void ShowPeople(Contact* pc);
void FindPeople(Contact* pc);
