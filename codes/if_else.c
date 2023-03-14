#include <stdio.h>

void main()

{
    int mark;
    printf("ENTER MARKS\n");
    scanf("%d", &mark);
    if(mark >= 80)
        printf("Grade is A\n");
    else if(mark > 70)
        printf("B grade\n");
    else if(mark > 60)
        printf("C grade\n");
    else
        printf("D grade");

    getch();
}
