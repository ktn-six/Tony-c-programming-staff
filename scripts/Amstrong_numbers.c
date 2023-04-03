#include <stdio.h>

/**

Amstrong number of order n is a number which each digit when multiplied by itself n number of times and finally added togetther, result the same number.

e.g
371
this is a 3 digit number hence the order is 3

3*3*3 + 7*7*7 + 1*1*1 = 27 + 343 + 1 = 371

*/

int main()

{
    int number, count=0, result=0, mul=1, cnt,rem;
    printf("please enter a number: ");
    scanf("%d", &number);

    int q = number;
    while(q !=0)
    {
        q = q/10;
        count++;
    }
    cnt = count;
    q = number;

    while(q!=0)
    {
        rem = q%10;
        while(cnt!=0)
        {
        mul = mul*rem;
        cnt--;
        }
        result = result + mul;
        cnt = count;
        q = q/10;
        mul = 1;
    }
    if(result == number)
        printf("%d is an Armstrong number", number);
    else
        printf("%d is not an armstrong number", number);

    return 0;

}
