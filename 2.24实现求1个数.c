#include <stdio.h>


int numberof1(int n)//仅可实现对正数
{
	int cunt = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (n % 2 == 1)
		{
			cunt++;
		}
		n = n / 2;
	}
	return cunt;
}

int numberof2(int n)//可实现对正、负数的操作，且输入类型为int
{
	int cunt = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((n & 1) == 1)
		{
			cunt++;
		}
		n = n >> 1;
	}
	return cunt;
}

int numberof3(int n)//可实现对正、负数的操作，且输入类型为int,更加简洁
{
	int cunt = 0;
	while (n)
	{
		n = n & (n - 1);
		cunt++;

	}
	return cunt;
}

int main()//实现求一个数存储中1的数量
{
	int a = -1;
	printf("%d\n", numberof3(a));
	return 0;
}
