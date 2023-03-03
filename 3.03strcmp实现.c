#include <stdio.h>

int mystrcmp(char* dest, const char* src)//实现strcmp
{
	while (*dest == *src)
	{
		if (*dest == '\0')
		{
			return 0;
		}
		dest++;
		src++;
	}
	return *dest - *src;
}

int main()
{
	char arr[] = "abbde";
	char arr2[] = "abcde";
	if (mystrcmp(arr, arr2) > 0)
		printf("arr>arr2");
	else if (mystrcmp(arr, arr2) < 0)
		printf("arr<arr2");
	else 
		printf("arr=arr2");
	return 0;
}
