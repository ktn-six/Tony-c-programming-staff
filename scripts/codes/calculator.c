
void main()

{
    int a,b,sum,sub,div,mul;
    char operator;
    printf("ENTER OPERATOR:\n");
    scanf("%C", &operator);
    printf("Enter two operands\n");
    scanf("%d %d", &a,&b);
    switch(operator)
    {
        case '+' : sum=a+b;
            printf("sum = %d \n", sum);
            break;
        case '-' : sub = a-b;
            printf("sub = %d, \n", sub);
            break;

        case '*' : mul = a*b;
            printf("mul = %d \n", mul);
            break;
        case '/' : div = a/b;
            printf("div = %d \n", div);
            break;
        default:
            printf(" ENTER VALID OPERATOR");

    }
getch();
}
