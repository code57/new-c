#include <stdio.h>



struct A
	{
		int a;
		char b;
	};

	int n = 14;

struct B
	{
		struct A c;
		char d;
	    int* p;
	};

void print1(struct B s)//定义打印结构体内容的函数
{
	printf("%p %d\n", s.p,s.c.a);
}

void print2(struct B *p)//使用传址，定义打印结构体内容的函数
{
	printf("%p %d\n", p->p, p->c.a);
}

int main()//结构体创建、初始化以及嵌套定义
{
	

	struct B m = { {1,'a'},'d',&n };
	printf("%d\n%c\n%c\n%p\n", m.c.a, m.c.b, m.d, m.p);
	printf("%p\n", &n);

	struct B* ps = &m;

	printf("%d\n", (*ps).c.a);
	printf("%c\n", ps->d);//此处指针ps未解引用，用->访问，而用ps.d是错误的
	
	print1(m);//使用打印结构体内容的函数
	print2(&m);
	return 0;
}
