#include <stdio.h>
#include <conio.h>

void main() 
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) 
    {
        printf("\nYear is a leap year.");
    } 
    else 
    {
        printf("\nYear is not a leap year.");
    }

    getch();
}
