#include <stdio.h>
#include <conio.h>

void main() {
    int i, n, prime = 1;

    printf("Enter number = ");
    scanf("%d", &n);

    if (n <= 1) {
        prime = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime == 1) {
        printf("Prime Number");
    } else {
        printf("Not Prime Number");
    }

    getch();
}
