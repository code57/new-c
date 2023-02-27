#include <stdio.h>

int main()//二维数组传参
{
	int arr[2][3] = { {1,2,3}, {2,3,4} };
	int(*p)[3] = arr;
	int i = 0, j = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
	return 0;
}
