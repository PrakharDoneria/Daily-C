#include <stdio.h>
#include <conio.h>

int main() {
    int i, n, sumEven = 0, sumOdd = 0;

    printf("Enter number = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }

    printf("\nSum of even numbers = %d", sumEven);
    printf("\nSum of odd numbers = %d\n", sumOdd);
    getch();
    return 0;
}
