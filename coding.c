#include <stdio.h>

int main()
{
    int a, b;
    char n;
x:
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("\n");
    while (1)
    {
        printf("%d", a);
        scanf(" %c", &n);
        if (n == '#')
        {
            printf("Result: %d\n", a);
            break;
        }
        if (n == '^')
        {
            a = 0;
            goto x;
        }
        scanf("%d", &b);
        switch (n)
        {
        case '+':
            a = a + b;
            printf("%d\n\n", a);
            break;
        case '-':
            a = a - b;
            printf("%d\n\n", a);
            break;
        case 'x':
            a = a * b;
            printf("%d\n\n", a);
            break;
        case '/':
            if (b != 0)
            {
                a = a / b;
                printf("%d\n\n", a);
            }
            else
            {
                printf("Cannot divide by zero!\n");
            }
            break;
        case 'R':
            if (b != 0)
            {
                a = a - ((int)(a / b) * b);
                printf("%d\n\n", a);
            }
            else
            {
                printf("Cannot calculate remainder when divisor is zero!\n\n");
            }
            break;
        default:
            printf("Invalid operator. Please enter a valid operator or '#' to exit.\n\n");
            break;
        }
    }

    return 0;
}