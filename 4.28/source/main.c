#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int  paycode = 0,hours;
	float manager = 0;
	float hworker, hworker_money,cworker_total,cworker_money,pworker_amount,pworker_money,pworker_salary,a;
	while (scanf_s)
	{
		printf("��J�N�X:  1-�޲z�H��  2-���~�u 3-��Ī� 4-�s�u\n");
		scanf_s("%d", &paycode);
		switch (paycode)
		{
			case 1:
				printf("��J�C�g�u��: ");
				scanf_s("%f",&manager);	
				printf("�޲z���~�ꬰ: %.2f\n",manager);
				break;
			case 2:
				printf("��J���~ ");
				scanf_s(" %f",&hworker);
				printf("��J�u�� ");
				scanf_s(" %d", &hours);
				if (hours <= 40)
				{
					hworker_money = hworker * hours;
					printf("���~�u�u�ꬰ: %.2f\n", hworker_money);
				}
				else
				{
					hworker_money = (hours - 40.0) * 1.5 * hworker + 40.0*hworker;
					printf("���~�u�u�ꬰ: %.2f\n", hworker_money);
				}				
				break;
			case 3:
				printf("��J��~�B ");
				scanf_s(" %f",&cworker_total);
				cworker_money = 250 + 0.057 * cworker_total;
				printf("��Ī��u�ꬰ%.2f\n", cworker_money);
				break;
			case 4:
				printf("�p��� ");
				scanf_s(" %f",&pworker_amount);
				printf("�p��u�� ");
				scanf_s(" %f", &pworker_salary);
				pworker_money= pworker_amount * pworker_salary;
				printf("�s�u�u�ꬰ%.2f\n", pworker_money);
				break;
		}
		if (paycode == -1)
		{
			return 0;
		}
	}


	system("pause");
	return 0;
}