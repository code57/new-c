#include <stdio.h>
int main()
{
	char arr[] = "25498@outlook.com";
	char tmp[20] = {0};
	char* p = "@.";
	strcpy(tmp, arr);
	char* ret = 0;
	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s ", ret);
	}
	return 0;
}
