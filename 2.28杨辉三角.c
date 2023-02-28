#include <stdio.h>
int main()//输出杨辉三角
{
	int i = 0, j = 0;
	int arr[10][10] = { 0 };
	int n = 10;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (i == j)
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		int m = 0;
		for (m = 10; m - i > 0; m--)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
