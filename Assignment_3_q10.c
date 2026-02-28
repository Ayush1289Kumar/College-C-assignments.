#include <stdio.h>

int main()
{
    // WAP to find the sum of all digits of a number entered by the user.
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    printf("Sum of all digits: %d", sum);

    return 0;
}