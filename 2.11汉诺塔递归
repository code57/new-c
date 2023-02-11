#include <stdio.h>


/*
汉诺塔设计思路:
设计函数h，其功能为：使n个盘子由a经过b中转到c
则，对非1的n个盘子，可视为3步：
1.将n-1个盘子由a到b
2.将1个盘子由a到c
3.将n-1个盘子由b到c
*/

void h(int n,char a,char b,char c)//利用递归实现汉诺塔
{
	if (1 == n)
	{
		printf("%c->%c ", a, c);
	}
	else
	{
		h(n - 1, a, c, b);//将n-1个由a到b
		printf("%c->%c ", a, c);//中间步骤
		h(n - 1, b, a, c);//将n-1个由b到c
	}
}


int main()
{
	int num = 0;
	scanf("%d", &num);
	h(num,'a','b','c');
	return 0;
}
