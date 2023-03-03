#include <stdio.h>
char* mystrcat(char* dest, const char* src)//实现strcat
{
	assert(dest && src);
	char* ret = dest;
	int n = 0;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr[20] = "hello ";
	char arr2[] = "world";
	mystrcat(arr, arr2);
	printf("%s\n", arr);
	return 0;
}
