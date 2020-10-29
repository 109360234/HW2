#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int l, b,temp,temp2;
	while (scanf_s)
	{
		printf("½Ð¿é¤Jªø¼e\n");
		scanf_s("%d%d", &l, &b);
		printf("\n");
		for (int i = 0 ; i < l; i++)
		{
			for (int j = 0 ;j <b;j++)
			{
				temp = l - 1;
				temp2 = b - 1;
				if (((i==0) ||(i==temp)&&(j<b)) || ((i>0)&&(i<temp)&&((j==0)||(j==temp2))))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}