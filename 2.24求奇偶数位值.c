#include <stdio.h>

void print12(int m)//输出奇数位和偶数位
{
	int i = 0;
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}

}

int main()
{
	int a = 225;
	print12(a);
	return 0;
}
