#include <stdio.h>

int main(){
    int n, r, sum = 0, temp;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;

    while(n>0){
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    printf("The sum of the cubes of the digits of %d is: %d\n", temp, sum);
}