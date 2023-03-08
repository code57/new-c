#include <stdio.h>
int main()//求分数
{
	int max = 0;
	int min = 100;//注意初始化最小值
	int sum = 0;
	int i = 0;
	int tmp = 0;
	for (i = 0; i < 7; i++)
	{
		tmp = 0;
		scanf("%d", &tmp);
		sum += tmp;
		if (tmp > max)
		{
			max = tmp;
		}
		if (tmp < min)
		{
			min = tmp;
		}
	}
	printf("%.2f", (sum - max - min) / 5.0);
	return 0;
}
