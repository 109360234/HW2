#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int i, j, r;
    r = 5;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= r - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    for (i = r - 1; i >= 1; i--)
    {
        for (j = 1; j <= r - i; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
         printf("\n");
    }
	system("pause");
	return 0;
}