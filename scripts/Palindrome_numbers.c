#include <stdio.h>

/** check if a number is palindrome number
* palindrome number is a number or a phrase if read backwards gives the same number or a word or a phare as it is being read forward.
ege 1221,racecar,24542 unop
*/

void main()
{
    int n, result=0, q, rem;
    printf("please enter the number: ");
    scanf("%d", &n);

    q = n;

    while (q!=0)
    {
        rem = q%10;
        result = result*10 + rem;
        q = q/10;
    }
    if(result == n)
        printf("Its a palindrome");
    else
        printf("NO! its not a palindrome");
        return 0;
}

