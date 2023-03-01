#include <stdio.h>
#include <stdlib.h>
int cmp(const void* a, const void* b)//快速排序
{
	return *(char*)a - *(char*)b;//若为int类型数组则此处须为int
}

int main()
{
	char arr[] = { "kifianfwfinf"};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%c ", arr[i]);
	}
	return 0;
}
