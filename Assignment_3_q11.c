#include <stdio.h>

int main()
{
    // WAP to find the reverse of a number.
    int num, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        rev = rev * 10 + rem;
    }

    printf("Reversed number: %d", rev);

    return 0;
}