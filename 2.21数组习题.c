#include <stdio.h>

void init(int arr[], int sz)//初始化数组为全0
{
	int cunt = 0;
	for (cunt = 0; cunt < sz; cunt++)
	{
		arr[cunt] = 0;
	}

	
}
void print(int arr[], int sz)//打印数组的每个元素
{
	int cunt = 0;
	for (cunt = 0; cunt < sz; cunt++)
	{
		printf("%d ",arr[cunt]);
	}


}

void reverse(int arr[],int sz)//函数完成数组元素的逆序
{
	int cunt = 0;
	int b = sz / 2;
	for (cunt = 0; cunt < b; cunt++)
	{
		int a = 0;
		a = arr[cunt];
		arr[cunt] = arr[sz - 1 - cunt];
		arr[sz - 1 - cunt] = a;
	}
	//Run-Time Check Failure #2 - 
	//Stack around the variable 'arr' was corrupted.通常是数组下表越界


}


int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	print(arr,sz);
	reverse(arr, sz);
	print(arr, sz);
	init(arr, sz);
	print(arr, sz);

	return 0;
}
