#include<stdlib.h>
#include<stdio.h>
int main(void)
{

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <=i; j++)
		{
			printf("%s", "*");
		}
			printf("\n");
	}
	printf("\n");

	for (int i = 0; i <10 ; i++)
	{
		for (int j = 9; j >=i ; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("\n");


	for (int i = 0; i < 10; i++)
	{
		for (int k = 1; k <=i ; k++)
		{
			printf(" ");
		}
		for (int j = 9; j+1>i; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 10; i++)
	{	
		for (int j = 9; j >i; j--)
		{
			printf(" ");
		}
		for (int k = 0; k <=i; k++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}


	system("pause");
	return 0;
}