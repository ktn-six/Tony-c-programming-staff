#include <stdio.h>
#define N 15

int main()

{


    int a[15], i;         //declaring arrays using macro.
    for (i=0; i<N; i++)
    {

        printf("Enter the input for index %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nArray elements are as follows:\n");
    for(i=0; i<N; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
