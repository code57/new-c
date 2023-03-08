#include <stdio.h>
struct S
{
	char arr[10];
	int num;
	float sc;
};


int main()
{
	struct S s = { "abc",10,5.5f };
	struct S s2 = { "def",11,6.5f };
	FILE* p = fopen("test.dat", "w");
	if (p == NULL)
	{
		perror("fopen");
		return 1;
	}
	fprintf(p, "%s %d %f", s.arr, s.num, s.sc);
	fclose(p);

	p = fopen("test.dat", "r");
	if (p == NULL)
	{
		perror("fopen");
		return 1;
	}
	fscanf(p,"%s %d %f", s2.arr, &(s2.num), &(s2.sc));
	fprintf(stdout,"%s %d %f", s2.arr, s2.num, s2.sc);
	//使用屏幕作为fprintf的输出流
	
		fclose(p);
	p = NULL;
	return 0;
}
