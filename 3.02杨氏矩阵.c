#include <stdio.h>
int fou(int arr[3][3], int* x, int* y,int z)//杨氏矩阵查找
{
	int m = 0;
	int n = *y - 1;
	while (m < *x && n>0)
	{
		if (arr[m][n] > z)
		{
			n--;
		}
		else if (arr[m][n] < z)
		{
			m++;
		}
		if (arr[m][n] == z)
		{
			*x = m;
			*y = n;
			return 1;
		}
		return 0;
	}
}

int main()
{
	int arr[3][3] = { 1,3,5,7,9,11,13,15,17 };
	int z = 11, x = 3, y = 3;
	int ret = fou(arr, &x, &y, z);
	if (ret == 0)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是%d,%d\n",x,y);
	}
 }
