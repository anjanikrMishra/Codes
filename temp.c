#include <stdio.h>

int main()
{

    char n;
    int a, b;
    do
    {
        printf("Enter an operator");
        scanf("%c", &n);
        printf("Enter two operands: ");
        scanf("%d%d", &a, &b);

        switch (n)
        {
        case '+':
            printf("%d%d", a + b);
            break;
        case '-':
            printf("%d%d", a - b);
            break;
        case '*':
            printf("%d%d", a * b);
            break;
        case '/':
            printf("%d%d", a / b);
            break;
        default:
            printf("Enter Valid Operand\n");
        }

    } while (n != 'a');

    return 0;
}