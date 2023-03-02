#include <stdio.h>
void rotate(char* str, int k)//实现左旋k个字符
{
	int n = strlen(str);
	int x = 0;
	for (x = 0; x < k; x++)
	{
		char tmp = *str;
		int j = 0;
		for (j = 0; j < n - 1; j++)
		{
			*(str + j) = *(str + j + 1);
		}
		*(str + n - 1) = tmp;
	}
}

int main()
{
	char arr[10] = "abcdefg";
	int k = 3;
	rotate(arr, k);
	int i = 0;
	printf("%s\n", arr);
	return 0;
}
