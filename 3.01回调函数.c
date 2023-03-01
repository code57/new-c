#include <stdio.h>

int add(int x, int y)//利用回调函数进行优化
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

int calc(int(*pf)(int, int))
{
	int x, y;
	printf("请输入两个数字");
	scanf("%d%d", &x, &y);
	printf("结果为%d\n",pf(x,y));
	return pf(x, y);
}

int main()
{
	int input = 0;
	do
	{
		
		menu();
		scanf("%d", &input);
		if (input != 0)
		{
			switch (input)
			{
			case 1:
				calc(add); break;
			case 2:
				calc(sub); break;
			case 3:
				calc(mul); break;
			case 4:
				calc(div); break;
			default:
				printf("非法输入，请重新输入\n");
			}
		}
		
			
		
	} while (input);
	return 0;
}
