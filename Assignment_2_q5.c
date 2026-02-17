#include <stdio.h>

int main()
{
    // W.A>P to check whether two numbers are equal or not.

    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 == num2)
        printf("Both are equal.");

    else
        printf("Both are not equal.");

    return 0;
}