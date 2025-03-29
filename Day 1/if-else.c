#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");

    scanf("%d", &age);
    //printf("You have entered %d as your age \n", age);

    if (age > 18)
    {
        printf("YOU CAN DRIVE!");
    }
    else if (age == 18)
    {
        printf("Kya he bolu?");
    }
    
    else
    {
        printf("YOU CAN NOT DRIVE!");
    }
    
    

}