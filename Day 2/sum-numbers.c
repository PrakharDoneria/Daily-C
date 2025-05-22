#include <stdio.h>
#include <conio.h>

void main()
{
    int n, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum of numbers from 1 to %d = %d\n", n, sum);

    getch(); 
}
