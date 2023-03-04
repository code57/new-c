#include <stdio.h>
char* mystr(const char* str1, const char* str2)//实现strstr
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* cp = str1;
	if (*str2 == '\0')//若str2为空字符串，返回str1
	{
		return (char*)str1;
	}

	while (*cp)
	{
		s1 = cp;
		while ((*s1 == *s2) && *s1 && *s2)
		{
			
			s1++;
			s2++;
		}
		if (*s1 == '\0' && *s2 == '\0')
		{
			printf("%p\n", cp);
			return (char*)cp;
		}
		cp++;
	}
	return NULL;
}

int main()
{
	char arr[] = "abcdef";
	char arr2[] = "def";
	char* ret = mystr(arr, arr2);
	printf("%p\n", ret);
	return 0;
}
