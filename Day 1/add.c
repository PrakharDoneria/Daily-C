#include <stdio.h>

// Addition
int add() 
{
    printf("%d\n", 3 + 7);
    return 0;
}

// Subtraction
int sub() 
{
    printf("%d\n", 5 - 2);
    return 0;
}

// Multiply
int multi()
{
    printf("%d\n",2 * 2);
    return 0;
}

// Divide
int divide()
{
    printf("%d\n",2 / 2);
    return 0;
}

// Modulus
int mod()
{
    printf("%d\n",8 % 2);
    return 0;
}

int main()
{
    add();
    sub();
    multi();
    divide();
    mod();
    return 0;
}