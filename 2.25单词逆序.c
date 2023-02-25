////将一句话的单词进行倒置，标点不倒置。比如 "I like beijing."，经过处理后变为："beijing. like I"。

#include <stdio.h>
#include<string.h>
void prit(char* p)
{
	static int cunt = 0;
	cunt++;
	int i = 0;
	for (i=0; *(p + i) != '\0' && *(p + i) != ' '; i++)
	{
		;
	}
	if(*(p+i)!='\0')
	{
		prit(p + i + 1);
	}
	int n = 0;
	for (n=0;n<i; n++)
	{
		printf("%c", *(p + n ));
	}
	if(cunt!=1)
	{
		printf(" ");
	}
	
}
int main()
{
	char arr[100] = {};
    gets(arr);
	prit(&arr);
	return 0;
}
