#include <stdio.h>
#include<stdlib.h>
int main(void)
{	
	float money,salary;
	while (scanf_s)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &money);
		if(money==-1)
		{
			break;
		} 
		printf("\n");
		printf("Salary is: $");
		salary = money * 0.09 + 200;
		printf("%.2f", salary);
		printf("\n");
	}
	system("pause");
	return 0;
}
