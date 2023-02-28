#include <stdio.h>

int main()//求跳水名次
{
	int a, b, c, d, e;
	for (a = 1; a < 6; a++)
	{
		for (b = 1; b < 6 ; b++)
		{
			for (c = 1; c < 6; c++)
			{
				for (d = 1; d < 6; d++)
				{	
					for (e = 1; e < 6; e++)
					{
						if (((b == 2) + (a == 3) == 1 && \
							(b == 2) + (e == 4) == 1 && \
							(c == 1) + (d == 2) == 1 && \
							(c == 5) + (d == 3) == 1 && \
							(e == 4) + (a == 1) == 1)==1)
						{
							if(a*b*c*d*e==120)
							{
								printf("a=%d,b=%d,c=%d,d=%d,e=%d,", a, b, c, d, e);
								return 0;
							}
						}
					}		
				}
			}
		}
  }
}
