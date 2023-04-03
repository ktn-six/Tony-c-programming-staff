#include <stdio.h>
// #include <math.h>

int main()

{
    int i, n,c = 0;
    printf("PLease enter a number (Only poistive numbers): ");
    scanf("%d", &n);

    //vall = ceil(sqrt(x));
    //val2 = x;

    for(i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
        c++;
        }
    }
    if(c == 2)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is a prime number", n);
    }
    // return 0;
}
