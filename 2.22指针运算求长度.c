#include <stdio.h>
int my_str(char* str)
{
	char* start = str;
	while (*str != 0)
	{
		str++;
	}
	return str - start;
}

int main()
{
	int len = my_str("abc");
	printf("%d\n", len);
	return 0;
}
