struct S
{
	char arr[10];
	int num;
	float sc;
};

int main()
{
	struct S s = { "hello",20,5.5f };
	struct S tmp = { 0 };
	char buf[100] = { 0 };
	
	sprintf(buf, "%s %d %f ", s.arr, s.num, s.sc);
	printf("%s\n", buf);
	sscanf(buf, "%s %d %f ", tmp.arr, &tmp.num, &tmp.sc);
	printf("%s %d %f \n", tmp.arr, tmp.num, tmp.sc);
	return 0;
}
