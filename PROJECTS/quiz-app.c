#include <stdio.h>

int main()
{
    int ans;
    printf("WHAT IS THE CAPITAL OF INDIA?\n");
    
    printf("1. Noida\n");
    printf("2. Delhi\n");
    printf("3. Etawah\n");
    printf("4. Jaipur");

    printf("\n\n\n");
    printf("Choose your answer: (1/2/3/4) \n");
    scanf("%d",&ans);

    if (ans == 1 || ans == 3 || ans == 4)
    {
        printf("Its a wrong answer!");
    }
    else{
        printf("Wooh! Its a correct answer!");
    }
    

}