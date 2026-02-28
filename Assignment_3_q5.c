#include <stdio.h>

int main()
{
    // WAP to print the factors of a given number.
    /*
    A factor is a number that divides another number completely,
    resulting in an integer without any remainder.
    For example, if you take the number 12,
    its factors include 1, 2, 3, 4, 6, and 12.
    */

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            printf(" %d ", i);
    }
    return 0;
}