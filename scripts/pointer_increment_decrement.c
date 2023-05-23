#include<stdio.h>

void main()

{
    int a[]={10,11,-1,56,67,5,4};
    int *p,*q;
    p=a;
    printf("value of p = %d\n", *p);
    printf("(*p)++ = %d, *p++ = %d, *++p = %d\n", (*p)++,*p++,*++p);
    q=p+3;
    printf("value of *q-3 = %d\n",*q-3);
    printf("value of *--p+5 = %d\n", *--p+5);
    printf("value of *p+*q = %d", *p+*q);
}
