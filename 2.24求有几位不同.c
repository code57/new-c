#include <stdio.h>


int diff1(int m, int n)//求有几位不同
{
	int i = m^n;
	int cunt = 0;
	while (i)
	{
		i = i & (i - 1);
		cunt++;

	}
	return cunt;
}

int main()
{
	int a = 1999;
	int b = 2299;
	printf("%d", diff1(a, b));
	return 0;
}
