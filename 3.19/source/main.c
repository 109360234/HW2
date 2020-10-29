#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float a, b, c,total;
	while (scanf_s)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &a);
		if (a == -1)
		{
			break;
		}
		printf("\n");
		printf("Enter interest rate :");
		scanf_s("%f", &b);
		printf("\n");
		printf("Enter term of the loan in days:");
		scanf_s("%f", &c);
		printf("\n");
		total = a * b * c / 365;
		printf("The interest charge is $");
		printf("%.2f", total);
		printf("\n");
	}
	system("pause");
	return 0;
}