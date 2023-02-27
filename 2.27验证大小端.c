#include <stdio.h>

int main()//判断大小端
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
		printf("小端存储");
	else
		printf("大端存储");
}
