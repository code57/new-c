#include <stdio.h>
char* mystr(const char* str1, const char* str2)//实现strstr但是过于臃肿
{
	assert(str1 && str2);
	char* tmp = NULL;
	if (strlen(str1) >= strlen(str2))
	{
		int i = 0;
		for (i = 0; i <= (strlen(str1) - strlen(str2)); i++)
		{
			str1 = str1 + i;
			int j = 0;
			for (j = 0; j < strlen(str2); j++)
			{
				if (*(str1 + j) == *(str2 + j))
				{
					if (j == (strlen(str2) - 1))
					{
						return str1;
					}
				}
				else
				{
					break;
				}
			}

		}
	}
	else
	{
		return NULL;
	}
	return tmp;
}

int main()
{
	char arr[] = "abcdef";
	char arr2[] = "def";
	int ret = mystr(arr, arr2);
	printf("%p", ret);
	return 0;
}
