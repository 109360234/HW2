#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int  paycode = 0,hours;
	float manager = 0;
	float hworker, hworker_money,cworker_total,cworker_money,pworker_amount,pworker_money,pworker_salary,a;
	while (scanf_s)
	{
		printf("輸入代碼:  1-管理人員  2-時薪工 3-抽傭金 4-零工\n");
		scanf_s("%d", &paycode);
		switch (paycode)
		{
			case 1:
				printf("輸入每週工資: ");
				scanf_s("%f",&manager);	
				printf("管理者薪資為: %.2f\n",manager);
				break;
			case 2:
				printf("輸入時薪 ");
				scanf_s(" %f",&hworker);
				printf("輸入工時 ");
				scanf_s(" %d", &hours);
				if (hours <= 40)
				{
					hworker_money = hworker * hours;
					printf("時薪工工資為: %.2f\n", hworker_money);
				}
				else
				{
					hworker_money = (hours - 40.0) * 1.5 * hworker + 40.0*hworker;
					printf("時薪工工資為: %.2f\n", hworker_money);
				}				
				break;
			case 3:
				printf("輸入營業額 ");
				scanf_s(" %f",&cworker_total);
				cworker_money = 250 + 0.057 * cworker_total;
				printf("抽傭金工資為%.2f\n", cworker_money);
				break;
			case 4:
				printf("計件數 ");
				scanf_s(" %f",&pworker_amount);
				printf("計件工資 ");
				scanf_s(" %f", &pworker_salary);
				pworker_money= pworker_amount * pworker_salary;
				printf("零工工資為%.2f\n", pworker_money);
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