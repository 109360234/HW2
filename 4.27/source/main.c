#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	int a, b, cc;
	for (a = 1; a < 500; a++)
	{
		for (b = 1; b < 500;b++)
		{
			for (int c = 1; c < 500; c++)
			{
				cc = a * a + b * b;
				if (cc == c * c)
				{
					printf("%d", a);		
					printf("   ");
					printf("%d", b);
					printf("   ");
					printf("   ");
					printf("%d\n", c);
				}
			}
		}
	}
	system("pause");
	return 0;
}