#include <stdio.h>



int main()//结构体创建、初始化以及嵌套定义
{
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

	struct B m = { {1,'a'},'d',&n };

	printf("%d\n%c\n%c\n%p\n", m.c.a, m.c.b, m.d, m.p);

	printf("%p\n", &n);



	return 0;
}
