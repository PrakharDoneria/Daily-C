#include <stdio.h>
#include <conio.h>

int main() {
    int i, n, a = 0, b = 1, c;

    printf("Enter number = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
    getch();
    return 0;
}
