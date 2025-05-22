#include <stdio.h>
#include <conio.h>

void main()
{
    int hindi, english, science, math, computer, sum;
    float per;

    printf("Enter marks of Hindi: ");
    scanf("%d", &hindi);
    printf("Enter marks of English: ");
    scanf("%d", &english);
    printf("Enter marks of Science: ");
    scanf("%d", &science);
    printf("Enter marks of Math: ");
    scanf("%d", &math);
    printf("Enter marks of Computer: ");
    scanf("%d", &computer);

    sum = hindi + english + science + math + computer;
    printf("\nSum of marks = %d", sum);

    per = (float)sum / 5;
    printf("\nPercentage of marks = %.2f%%", per);

    if (per >= 90)
    {
        printf("\nGrade A");
    }
    else if (per >= 80)
    {
        printf("\nGrade B");
    }
    else if (per >= 60)
    {
        printf("\nGrade C");
    }
    else
    {
        printf("\nGrade D");
    }

    getch(); 
}
