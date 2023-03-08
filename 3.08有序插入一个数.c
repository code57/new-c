#include <stdio.h>
int main()//有序插入一个数
{
	int m = 0;
	scanf("%d", &m);
	int arr[20] = { 0 };
	int i = 0;
	for(i=0;i<m;i++)
	{
		scanf("%d", &arr[i]);
	}
	int n = 0;
	scanf("%d", &n);
	arr[i] = n;
	int tmp = 0;
	for (i = m; i > 0; i--)
	{
		if (arr[i] < arr[i - 1])
		{
			tmp = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = tmp;
		}
		else
		{
			break;
		}
	}
	for (i = 0; i <= m; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
