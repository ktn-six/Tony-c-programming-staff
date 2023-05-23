#include<stdio.h>
void main()
{
    char str[]="WELCOME TO JENNYS";
    char *ptr=str;
    printf("value of *ptr=%c\n",*ptr);
    printf("value of *ptr++ +1=%c\n", *(ptr++ +1));
    printf("value of *((ptr-- +5)-1)=%c,\n",*((ptr-- +5)-1));
    printf("value of *(++ptr+10)-32)=%c\n",*(++ptr+10)-32);
    printf("value of *ptr = %c, *++ptr=%c,*--ptr+=%c",*ptr, *++ptr,*--ptr);
}
