#include <stdio.h>
#include <conio.h>

void main()
{
    int choice, a, b;
    printf("Select your choice:\n");
    printf("1 - Add\n");
    printf("2 - Sub\n");
    printf("3 - Mul\n");
    printf("4 - Div\n");
    printf("5 - Mod\n");

    printf("Enter number a = ");
    scanf("%d", &a);
    printf("Enter number b = ");
    scanf("%d", &b);

    printf("Enter your choice = ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Addition of %d and %d is %d\n", a, b, a + b);
            break;
        case 2:
            printf("Subtraction of %d and %d is %d\n", a, b, a - b);
            break;
        case 3:
            printf("Multiplication of %d and %d is %d\n", a, b, a * b);
            break;
        case 4:
            if (b != 0)
                printf("Division of %d by %d is %d\n", a, b, a / b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case 5:
            if (b != 0)
                printf("Modulus of %d and %d is %d\n", a, b, a % b);
            else
                printf("Error: Modulus by zero is not allowed.\n");
            break;
        default:
            printf("Wrong choice.\n");
    }

    getch();
}
