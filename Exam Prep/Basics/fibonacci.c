#include <stdio.h>

int main(){
    int n, first = 0, secound = 1, next, i = 0;
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    do{
        if (i <= 1)
            next = i; 
        else {
            next = first + secound; 
            first = secound; 
            secound = next;
        } 
        printf("%d ", next);
        i++;   
    }
    while (i < n);
}