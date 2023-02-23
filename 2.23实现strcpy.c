#include<stdio.h>


void my_cpy1(char* a, char* b)//自定义函数实现strcpy
{
	char* p = b;
	while (*b != 0)
	{
		b++;
	}
	int sz = b - p;//可能丢失数据
	int i = 0;
	for(i=0;i<sz;i++)
	{
		*(a + i) = *(p + i);
	}
	*(a + i ) =*(b + i );

}

void my_cpy2(char* a, char* b)//自定义函数实现strcpy,更简洁，效果相同
{
	while (*b != '\0')
	{
		*a++ = *b++;
	}
	*a = *b;
}

void my_cpy3(char* a, const char* b)//更简洁，效果相同//const防止b被赋值
{
	assert(a != NULL && b != NULL);//断言防止对空指针进行运算，需要引用头文件
	while (*a++ = *b++)
	{
		;
	}
}

int main()
{
	char arr1[] = "adadadadwads";
	char arr2[] = "apex";
	printf("%s ", arr1);
	my_cpy3(arr1, arr2);//可使用my_str1 my_str2 my_str3
	printf("%s ", arr2);
	printf("%s ", arr1);
	return 0;
}
