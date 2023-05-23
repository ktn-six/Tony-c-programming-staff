// to read to arrays of size 10 and store sum of these arrays into a third array
#include <stdio.h>

int main()
{
    int i;
    int arr1[i],arr2[i],arr3[i];
    for(i<0;i<10;i++)
    {
        printf("Enter value of element of array 1: ");
        scanf("%d", &arr1[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("Enter elements of array 2:");
        scanf("%d", &arr2[i]);
    }
    for(i=0;i<10;i++)
    {
         arr3[i]=arr1[i]+arr2[i];
         printf("\nsum of the two array is index=%d sum=%d:\n",i,arr3[i]);
    }


}
