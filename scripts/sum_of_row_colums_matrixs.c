#include<stdio.h>
int main()
{
   int a[3][3],i,j,sumRow,sumCol;
   printf("enter value of matrix:");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           scanf("%d",&a[i][j]);

       }
   }

   printf("matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");

    }

   for(i=0;i<3;i++)
   {
       sumRow=sumCol=0;
       for(j=0;j<3;j++)
       {
           sumRow=sumRow+a[i][j];
           sumCol=sumCol+a[i][j];

       }
       printf("\nsum of row =%d and sum of column =%d",sumRow,sumCol);
   }



}
