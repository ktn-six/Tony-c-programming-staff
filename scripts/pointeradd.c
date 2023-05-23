#include<stdio.h>

void main()
{
    int a[5]={1,4,5,6,3};
    int *p=&a[0];
    printf("p value is:%d\n", *p);
    printf("p address is:%u \n",p);
    p=p+2;
    printf("p+2 value is:%d\n", *p);
    printf(" p+2 address is:%u",p);
}
