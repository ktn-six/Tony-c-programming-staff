#include <stdio.h>


void sum(); // function declaratiom
void main()
{
sum(); // function calling
}
void sum()
     // function difinition

{
    int a,b, sum=0;
    printf("enter two numbers");        // function difinition
        scanf("%d%d", &a,&b);           // function difinition

    sum=a+b;                            // function difinition
    printf("sum=%d\n", sum);            // function difinition
}
