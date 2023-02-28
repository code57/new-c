#include <stdio.h>
int chan(int m)//递归计算喝的汽水数量
{
	
	if (m > 1 && m % 2 == 0)
	{
		return m/2 + chan(m / 2);
	}
	else if (m > 1 && m % 2 != 0)
	{
		return m/2 + chan(m / 2 + m % 2);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a = 40;//40个瓶子
	int sum=chan(a);
	printf("%d", sum);

	return 0;
}
