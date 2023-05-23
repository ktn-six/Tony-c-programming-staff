#include <stdio.h>

void main()
{
    int a[2][3],i,j,sum=0;
    printf("ENTER ELEMENTS OF THE MATRIX/ARRAY:");

    //nested loop
    for(i=0;i<2;i++)
    {

        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("THE MATRIX IS;\n");

    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d\t",a[i][j]);
           sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("\nsum %d",sum);

}
