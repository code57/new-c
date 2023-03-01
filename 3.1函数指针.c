#include <stdio.h>

int add(int x, int y)//利用函数指针进行函数优化，避免switch语句过多
{
	return (x + y);
}
int sub(int x, int y)
{
	return (x - y);
}
int mul(int x, int y)
{
	return (x * y);
}
int div(int x, int y)
{
	return (x / y);
}

void menu()
{
	printf("*******1.加法******2.减法*******\n");
	printf("*******3.乘法******4.除法*******\n");
	printf("*************0.退出*************\n");
	printf("********************************\n");
}

int main()
{
	int(*pf[5])  (int, int) = { 0,add,sub,mul,div };
	int input = 0;
	do
	{
		int x, y;
		menu();
		scanf("%d", &input);
		printf("请输入两个数字");
		scanf("%d%d", &x, &y);
		printf("%d\n", pf[input](x, y));
	} while (input);
	return 0;
}
