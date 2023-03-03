#include <stdio.h>

void reverse(char* l,char* r)//三步翻转实现左旋
{
	assert(l && r);
	while (l < r)
	{
		char tmp = *l;
		* l = * r;
		*r = tmp;
		l++;
		r--;
	}
}

void rotate(char* str, int k)//实现左旋k个字符
{
	assert(str);
	int n = strlen(str);
	reverse(str, (str + k-1));
	reverse(str + k, str + n - 1);
	reverse(str, str + n - 1);
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
