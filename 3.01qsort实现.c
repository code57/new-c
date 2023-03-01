#include <stdio.h>
#include <stdlib.h>//实现qsort
void swap(char* a, char* b, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *a;
		*a = *b;
		*b = tmp;
		a++;
		b++;

	}
}

void mysort(void* base, size_t sz, size_t width, int(*cmp)(const void* a, const void* b))
{
	int i, j;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz-1-i; j ++ )
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}


//qsort实现后的使用
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
	mysort(s, sz, sizeof(s[0]), cmp);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", s[i].name);
	}
	return 0;
}
