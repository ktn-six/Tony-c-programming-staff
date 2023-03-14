#include <stdio.h>
void main()

{
    int age;
printf("enter value of age\n");

 scanf(" %d", & age);
if (age > 20 && age < 30)

{

    printf("your age is: %d,\n", age);
    printf("you can go out with me\n");
}

else{
    printf("age =%d\n", age);
    printf("GO HOME\n\n");

}
printf("out of if-else");
getch();
}
