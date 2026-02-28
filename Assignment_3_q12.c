#include <stdio.h>

int main()
{
    // WAP to check whether the number entered is palindrome or not.
    int num, temp, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        temp = temp / 10;
        rev = rev * 10 + rem;
    }

    if (rev == num)
        printf("%d is a Palindrome number", num);

    else
        printf("%d is Not a Palindrome number", num);

    return 0;
}