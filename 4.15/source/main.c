#include<stdio.h>
#include<stdlib.h>
int main(void)
{	
	float money = 5000.00;
	for (float j = 10.0; j < 12.5; j+=0.5)
	{
		printf("%s%.2f\n", "rate  ",j);
			for ( int i = 1;  i <16; i++)
			{
				if(i==1)printf("year\n");
				if(i<10)
				printf("%d%s", i,"   ");
				else
				printf("%d%s", i, "  ");
				money = money + (money * j / 100);
				printf("%.2f\n", money);
			}
			printf("\n");
	}
	system("pause");
	return 0;
}