#include <stdio.h>
int istrue(char* p1,char* p2)
{
	assert(p1 && p2);
	char* pp = p1;
	int n = strlen(p1);
	int m = strlen(p2);
	if (m != n)
	{
		return 0;
	}
	int i = 0;
	for (i = 0; i < n; i++)
	{
		p1 = p1 + i;
		int j = 0;
		for (j = 0; j < n; j++)//遍历1-1,2-1,3-1...
		{
			if (p1 + j > pp + n - 1)//判断越界
			{
				p1 = p1 - 5;
			}
			if (*(p1 + j) == *(p2 + j))
			{
				if (j == 4)
				{
					return 1;
				}
			}
			else
			{
				break;
			}

		}
	}
	return 0;
}

int main()
{
	char p1[20] = "aabcd";
	char p2[20] = "abcda";
	int ret = istrue(p1, p2);
	if (ret == 0)
	{
		printf("不是");
	}
	else
	{
		printf("是");
	}
	return 0;
}
