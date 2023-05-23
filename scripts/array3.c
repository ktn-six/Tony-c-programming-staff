#include <stdio.h>


// array to identify number entered if they are odd or even
int main()
{
    int i,arr[10];
    int even=0, odd=0;
    printf("Enter array elements: \t");
    for(i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("total even no. are: %d", even);
    printf("\ntotal odd no. are: %d", odd);
}
