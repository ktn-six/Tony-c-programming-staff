#include<stdio.h>
void main()
{
    int a=10, b=15, c;  //declaring variables
    //declaring pointers


    int *p, *q;
    //initializing pointers
    p = &a;
    q = &b;
    c=*p;
     printf("value of a = %d\n",a);
     printf("value of a = %d\n", *p);
     printf("address of a = %x\n",&a);
     printf("address of a = %x\n", p);
     printf("address of p = %x\n", &p);
     printf("c = %d\n",c);

     printf("value of b = %d\n",b);
     printf("value of b = %d\n", *q);
     printf("address of b = %x\n",&b);
     printf("address of b = %x\n", q);
     printf("address of q = %x\n", &q);


}
