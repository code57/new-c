#include <stdio.h>
//方法1
int main()//数组奇偶排序
{
	int arr[] = { 1,2,3,4,0,6,7,8,9 };
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0, j = 0, k = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr[i] % 2 == 1)
		{
			arr1[j] = arr[i];
			j++;
		}
		else
		{
			arr2[k] = arr[i];
			k++;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if(arr1[i]!=0)
		{
			arr[i] = arr1[i];
		}
		else
		{
			break;
		}
	}
	int l = 0;
	do
	{
		arr[i] = arr2[l];
		i++;
		l++;
	} while (i<sz);
	for (l = 0; l < sz; l++)
	{
		printf("%d ", arr[l]);
	}
}

//方法2

void change(int arr[], int sz)
{
	int left = 0, right = sz - 1;
	while (left < right)
	{
		while (left < right && (arr[left] % 2 == 1))
		{
			left++;
		}
		while (left < right && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[right];
			arr[right] = arr[left];
			arr[left] = tmp;
		}
	}
}

int main()
{
	int arr[] = { 1,3,3,4,5,6,7,5,9 };
	int sz= sizeof(arr) / sizeof(arr[0]);
	change(arr,sz);
	int l = 0;
	for (l = 0; l < sz; l++)
	{
		printf("%d ", arr[l]);
	}
	return 0;
}
