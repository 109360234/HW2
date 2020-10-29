#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int number;
	float begin = 0;
	float charge = 0;
	float credits = 0;
	float limit = 0;
	float new = 0;
	while (scanf_s)
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &number);
		if (number == -1)
		{
			break;
		}
		printf("\n");
		printf("Enter the beginning balance: ");
		scanf_s("%f", &begin);
		printf("\n");
		printf("Enter the total charges: ");
		scanf_s("%f", &charge);
		printf("\n");
		printf("Enter the total credits: ");
		scanf_s("%f", &credits);
		printf("\n");
		printf("Enter credit limit: ");
		scanf_s("%f", &limit);
		printf("\n");
		new = begin + charge - credits;
		if (new > limit)
		{
			printf("Account:        %d",number);
			printf("\n");
			printf("Credit limit:   %.2f",limit);
			printf("\n");
			printf("Balance:       %.2f", new);
			printf("\n");
			printf("Credit Limit Exceeded.");
			printf("\n\n");
		}
	}
	system("pause");
	return 0;
}