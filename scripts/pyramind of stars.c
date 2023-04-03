#include <stdio.h>

int main()


/**
    3 rows -> 5 columns
    4 rows -> 7 columns
    5 rows -> 9 columns
    6 rows -> 11 columns
    7 rows -> 13 columns
    8 rows -> 15 columns     {     if you have n number of rows the 2n - 1 will be no of columns    }
    9 rows -> 17 columns
    10 rows -> 19 columns
*/
{
    int i,j,n;
    printf("How many rows you want in your pyramind?\n");
    scanf("%d", &n);


    for(i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2*n-1; j++)
        {
            if(j >= n-(i-1) && j <= n+(i-1))
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

}
