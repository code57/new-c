#include <stdlib.h>//结构体快速排序
#include <stdio.h>
struct stu
{
	char name[20];
	int age;
};

int cmp(const void* a, const void* b)
{
	return ((struct stu*)a)->age - ((struct stu*)b)->age;
}

int main()
{
	struct stu s[3] = { {"wangwu",34},{"lihua",22}, {"jinhao",25} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", s[i].name);
	}
	return 0;
}
