#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//绿色注释代码部分为静态版


void menu()
{
	printf("***************通讯录*****************\n");
	printf("********1.add      2.del   ***********\n");
	printf("********3.search   4.modify***********\n");
	printf("********5.sort     6.print ***********\n");
	printf("********      0.exit       ***********\n");
	printf("**************************************\n");
	printf("\n");
}

enum option
{
	e_xit,
	add,
	del,
	search,
	modify,
	sort,
	print
};

int main()
{
	int input = 0;
	contact con;
	initcontact(&con);
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		/*case e_xit://静态版本内存销毁
			return 0;
			break;*/
		//case e_xit:
		//	free(con.data);
		//	con.data = NULL;//动态版本内存销毁
		//	con.sz = 0;
		//	con.capa = 0;
		//	return 0;
		//	break;
		case e_xit:
			savecontact(&con);
			free(con.data);
			con.data = NULL;
			con.sz = 0;
			con.capa = 0;
			return 0;
			break;
		case add:
			addcontact(&con);
			break;
		case del:
			delcontact(&con);
			break;
		case search:
			searchcontact(&con);
			break;
		case modify:
			modifycontact(&con);
			break;
		case sort:
			sortcontact(&con);
			break;
		case print:
			printcontact(&con);
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);





	return 0;
}
