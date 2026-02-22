#include <stdio.h>

int main()
{
    /*
    WAP to perform the calculation (addition, subtraction, multiply, division )
    as the symbol entered (using switch statement)
    */

    float num1, num2;
    char operation;

    printf("Enter expression: ");
    scanf("%f %c %f", &num1, &operation, &num2);

    if (operation == '/' && num2 == 0)
        printf("Division by zero is not allowed.");

    switch (operation)
    {
    case '+':
        printf("Sum: %.2f", num1 + num2);
        break;
    case '-':
        printf("Difference: %.2f", num1 - num2);
        break;
    case '*':
        printf("Product: %.2f", num1 * num2);
        break;
    case '/':
        printf("Division: %.2f", num1 / num2);
        break;

    default:
        break;
    }

    return 0;
}