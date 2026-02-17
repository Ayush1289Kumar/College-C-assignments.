#include <stdio.h>

int main()
{
    // WAP to check whether a number is a positive , negative or zero.
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
        printf("Entered number is Zero");

    else if (num > 0)
        printf("Entered number is a Positive number");

    else
        printf("Entered number is a Negative number.");

    return 0;
}