#include <stdio.h>
#include <assert.h>
#include <string.h>
char* my_memcpy(void* dest, const void* sour, size_t n)
{
	assert(dest && sour);
	void* ret = dest;
	while (n--);
	{
		*(char*)dest = *(char*)sour;
		dest = (char*)dest + 1;
		sour = (char*)sour + 1;
	}
	return ret;
}

int main()
{
	int arr1[20] = { 1,2,3,4,5,6,7 };
	int arr2[20] = { 5,6,5,7,8,9,4 };
	my_memcpy(arr1, arr2, 5);
	printf("%d\n", arr1[0]);
	return 0;
}
