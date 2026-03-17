#include <stdio.h>

int main()
{
    int num1 = 17, num2 = 2;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("Num1 = %d\tNum2 = %d\n", num1, num2);
    printf("Sum: %d\n", *ptr1 + *ptr2);

    printf("Diff: %d\n", *ptr1 - *ptr2);

    printf("Product: %d\n", *ptr1 * *ptr2);

    printf("Division: %d\n", *ptr1 / *ptr2);

    printf("Modulo: %d\n", *ptr1 % *ptr2);

    return 0;
}