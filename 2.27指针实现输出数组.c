#include <stdio.h>
void prit(int* p,int r)//指针实现输出数组
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		printf("%d ", *(p + i));

	}
}

int main()
{
	int arr[3] = { 1,2,3 };
	prit(arr, 3);
	return 0;
}
