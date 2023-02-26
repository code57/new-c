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
//将一句话的单词进行倒置，标点不倒置。
//bit做法
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s\n", arr);
	return 0;
}
