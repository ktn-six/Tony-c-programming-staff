#include <stdio.h>
int  main()
{
    int number, i,a;
    printf("Enter a number\n");
    scanf("%d", &number);
    for(i = 1; i <= 10; i++)
    {
        a = number*i;
        printf("\n%d x %d = %d\n", number,i,a);
    }
return(0);
}
