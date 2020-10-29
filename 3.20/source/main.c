#include<stdio.h>
#include<stdlib.h>
int main(void)
{   
    float h, r, s, temp1,temp2;
     while (scanf_s) {
         printf("Enter number of hours worked (-1 to end): ");
         scanf_s("%f", &h);
         if (h == -1)
         {
             break;
         }
         printf("Enter hourly rate of the worker ($00.00): ");
         scanf_s("%f", &r);
         s = h * r;
         if (h <= 40) 
         {
             printf("Salary is %.2f\n", s);
         }
         else if (h > 40)
         {
             temp1 = h - 40;
             temp2 = temp1 * r / 2;
             s = s + temp2;
             printf("Salary is %.2f\n", s);
         }
     }
     system("pause");
     return 0;
}

