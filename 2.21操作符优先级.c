#include <stdio.h>

int fun()
{
	static int count=1;
	return ++count;
}

int main()//先执行函数
{
	int a = fun() - fun() * fun();// 2-3*4
	printf("%d", a);
}
