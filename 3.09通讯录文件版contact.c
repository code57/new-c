#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"


void check(contact* p)
{
	if (p->sz == p->capa)
	{
		peo* ptr = (peo*)realloc(p->data, (p->capa + int_sz) * sizeof(peo));
		if (ptr != NULL)
		{
			p->data = ptr;
			printf("\n增容成功！\n");
			p->capa += int_sz;
		}
		else
		{
			perror("addcontact");
			return;
		}

	}
}





void loadcontact(contact* p)
{
	FILE* pf = fopen("contact.dat", "r");
	if (pf == NULL)
	{
		perror("loadcontact");
		return;
	}
	peo tmp = { 0 };
	while (fread(&tmp, sizeof(peo), 1, pf))
	{
		check(p);

		p->data[p->sz] = tmp;
		p->sz++;
	}

	
	
	
	fclose(pf);
	pf = NULL;
}









//void initcontact(contact* p)
//{
//	p->sz = 0;
//	memset(p->data, 0, sizeof(p->data));
//}
void initcontact(contact* p)
{
	p->data = (peo*)calloc(default_sz, sizeof(peo));
	if (p->data == NULL)
	{
		perror("initcontact");
		return;
	}
	p->sz = 0;
	p->capa = default_sz;

	loadcontact(p);//
}

//void addcontact(contact* p)
//{
//	if(p->sz<max)
//	{
//		printf("\n请输入姓名:");
//		scanf("%s", p->data[p->sz].name);
//		printf("\n请输入性别:");
//		scanf("%s", p->data[p->sz].sex);
//		printf("\n请输入年龄:");
//		scanf("%d", &(p->data[p->sz].age));
//		printf("\n请输入电话:");
//		scanf("%s", p->data[p->sz].tele);
//		printf("\n请输入地址:");
//		scanf("%s", p->data[p->sz].addr);
//		p->sz++;
//		printf("\n");
//		printf("添加成功\n");
//	}
//	else
//	{
//		printf("通讯录已满！\n");
//	}
//}

void addcontact(contact* p)
{
	check(p);

	printf("\n请输入姓名:");
	scanf("%s", p->data[p->sz].name);
	printf("\n请输入性别:");
	scanf("%s", p->data[p->sz].sex);
	printf("\n请输入年龄:");
	scanf("%d", &(p->data[p->sz].age));
	printf("\n请输入电话:");
	scanf("%s", p->data[p->sz].tele);
	printf("\n请输入地址:");
	scanf("%s", p->data[p->sz].addr);
	p->sz++;
	printf("\n");
	printf("添加成功\n");
	
	
}

void delcontact(contact* p)
{
	char arr[20] = { 0 };
	printf("请输入要删除的联系人姓名:");
	scanf("%s", arr);
	int i = 0;
	
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(arr, p->data[i].name) == 0)
		{
			for (; i < p->sz - 1; i++)
			{
				p->data[i] = p->data[i + 1];
			}
			p->sz--;
			printf("\n删除成功\n");
			return;
		}
	}
	printf("\n该联系人不存在\n");
}

void searchcontact(const contact* p)
{
	char arr[20] = { 0 };
	printf("\n请输入要查找的联系人姓名:");
	scanf("%s", arr);
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(arr, p->data[i].name) == 0)
		{
			printf("\n该联系人信息如下\n");
			printf("\n%-20s\t%-10s\t%-5s\t%-12s\t%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
			printf("%-20s\t%-10s\t%-5d\t%-12s\t%-30s\n\n", p->data[i].name, p->data[i].sex, p->data[i].age, p->data[i].tele, p->data[i].addr);
			return;
		}
	}
	printf("\n该联系人不存在\n");
}

void modifycontact(contact* p)
{
	int i = 0;
	char arr[20] = { 0 };
	printf("\n请输入要修改的联系人的姓名:");
	scanf("%s", arr);
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(arr, p->data[i].name) == 0)
		{
			printf("\n请输入要修改的姓名:");
			scanf("%s", p->data[i].name);
			printf("\n请输入要修改的性别:");
			scanf("%s", p->data[i].sex);
			printf("\n请输入要修改的年龄:");
			scanf("%d", &(p->data[i].age));
			printf("\n请输入要修改的电话:");
			scanf("%s", p->data[i].tele);
			printf("\n请输入要修改的地址:");
			scanf("%s", p->data[i].addr);
			printf("\n修改成功\n");
			return;
		}
		
	}
	printf("\n该联系人不存在\n");
}

void sortcontact( contact* p)
{
	int i = 0, j = 0;
	for (i = 1; i < p->sz; i++)//外层循环是比较的轮数，数组内有10个数，那么就应该比较10-1=9轮
	{
		for (j = 0; j < p->sz - i; j++)//内层循环比较的是当前一轮的比较次数，例如：第一轮比较9-1=8次，第二轮比较9-2=7次
		{
			if (p->data[j].age > p->data[j+1].age)//相邻两个数如果逆序，则交换位置
			{
				p->data[p->sz + 1] = p->data[j];
				p->data[j] = p->data[j + 1];
				p->data[j+1] = p->data[p->sz + 1];
			}
		}
	}
	printf("\n排序成功！\n");
}


void printcontact(contact* p)
{
	int i = 0;
	printf("%-20s\t%-10s\t%-5s\t%-12s\t%-30s\n","姓名","性别","年龄","电话","地址");
	for (i = 0; i < p->sz; i++)
	{
		printf("%-20s\t%-10s\t%-5d\t%-12s\t%-30s\n",p->data[i].name, p->data[i].sex, p->data[i].age, p->data[i].tele, p->data[i].addr);
	}
	printf("\n");

}

void savecontact(contact* p)
{
	FILE* pf=fopen("contact.dat", "w");
	if (pf == NULL)
	{
		perror("savecontact");
		return;
	}
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		//fprintf(pf, "%s %s %d %s %s\n", p->data[i].name, p->data[i].sex, p->data[i].age, p->data[i].tele, p->data[i].addr);
		fwrite(p->data + i, sizeof(peo), 1, pf);
	}

	fclose(pf);
	pf = NULL;
}
