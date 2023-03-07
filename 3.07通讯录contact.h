#pragma once
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define max_name 20
#define max_sex 10
#define max_tele 12
#define max_addr 30
#define max 1000
#define default_sz 3
#define int_sz 3




typedef struct peoinfo
{
	char name[max_name];
	char sex[max_sex];
	int age;
	char tele[max_tele];
	char addr[max_addr];
}peo;

//typedef struct contact//静态版本
//{
//	peo data[max];
//	int sz;
//
//}contact;
typedef struct contact//动态版本
{
	peo *data;
	int sz;
	int capa;
}contact;

void initcontact(contact* p);
void addcontact(contact* p);
void delcontact(contact* p);
void searchcontact(contact* p);
void modifycontact(contact* p);
void sortcontact(const contact* p);
void printcontact(contact* p);
