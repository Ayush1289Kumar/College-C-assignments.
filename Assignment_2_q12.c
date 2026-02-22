#include <stdio.h>

int main()
{
    // WAP to find the greatest of three numbers using else if and
    // logical operators.

    int num1, num2, num3;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
        printf("%d is greatest number.", num1);

    else if (num2 > num3 && num2 >= num1)
        printf("%d is greatest number.", num2);

    else
        printf("%d is greatest number.", num3);

    return 0;
}