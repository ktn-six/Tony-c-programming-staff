#include<stdio.h>
int main()
{
	int number,i,a;
	printf("Enter a number\n");
	scanf("%d", &number);
	while(i<=10)
	{
	a = number*i;
	printf("\n%d x %d = %d\n", number,i,a);
	i++;
	}
return(0);
}
