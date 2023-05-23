#include <stdio.h>
void main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;

    printf("a=%d\n",a);
    printf("a=%d\n",*p);
    printf("a=%d\n", **q);
    printf("a=%d\n", ***r);
    printf("address of a %x %x\n", &a, p);
    printf("address of p %x %x\n", &p, q);
    printf("address of q %x %x\n", &q, r);
    printf("address of r %x", &r);
}
