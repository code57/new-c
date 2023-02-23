int mys(const char* p)
{
	assert(p != NULL);
	int ret = 0;
	while(*p++ != '\0')
	{
		ret++;
	}
	return ret;
}

int main()
{
	char arr[] = "abcdef";
	printf("%d\n", mys(arr));
	return 0;
}
