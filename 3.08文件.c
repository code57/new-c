#include <stdio.h>

int main()//文件写入与输出
{
	FILE* p = fopen("test.dat", "w");
	if (p == NULL)
	{
		perror("fopen");
		return 1;
	}
	fputs("lmg", p);
	fputc('b', p);
	fputc('c', p);
	fputc('d', p);
	fclose(p);

	p = fopen("test.dat", "r+");
	if (p == NULL)
	{
		perror("fopen");
		return 1;
	}
	int ret = fgetc(p);
	printf("%c\n", ret);
	ret = fgetc(p);
	printf("%c\n", ret);
	ret = fgetc(p);
	printf("%c\n", ret);
	ret = fgetc(p);
	printf("%c\n", ret);

	fclose(p);



	p = NULL;
	return 0;
}
