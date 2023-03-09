struct S//文件拷贝
{
	char arr[10];
	int num;
	float sc;
};

int main()
{
	struct S s = { "abc",10,5.5f };
	struct S s2 = { "def",11,6.5f };
	FILE* pr = fopen("test.dat", "r");
	if (pr == NULL)
	{
		perror("fopen");
		return 1;
	}
	FILE* pw = fopen("test2.dat", "w");
	if (pw == NULL)
	{
		perror("fopen");
		return 1;
	}
	int tmp = 0;
	while ((tmp = fgetc(pr)) != EOF)
	{
		fputc(tmp, pw);

	}
	fclose(pr);
	pr = NULL;
	fclose(pw);
	pw = NULL;
	return 0;
}
