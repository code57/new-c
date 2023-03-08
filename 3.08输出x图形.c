#include <stdio.h>
int main()//输出X图形
{
	int n = 0;
	scanf("%d", &n);
	int i = 0, j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j || i + j == (n - 1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
