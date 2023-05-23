    #include<stdio.h>
    int main()
    {
        int a[]={3,4,5,6,9};
        int *p=a; //int *p=a[0]
        int *q=&a[3];

        printf("q-p = %d\n",  q-p);
        printf("p-q= %d\n", p=q);
        printf("value of p and q %d %d\n",*p,*q);
        q=q-2;
        printf("value of q = %d\n",*q);
        printf("value of q-2 %d\n", q-2);

        p=p+2;
        printf("q-p=%d\n", q-p);
        printf("value of p and q %d %d",*p,*q);

    }
