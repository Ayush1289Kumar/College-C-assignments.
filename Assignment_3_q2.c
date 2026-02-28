#include <stdio.h>

int main()
{
    // WAP to print odd numbers from 1 to 20 in descending order.
    printf("Odd numbers from 1 to 20 in descending order:\n");

    for (int i = 20; i != 0; i--)
    {
        if (i % 2 != 0)
            printf(" %d ", i);
    }
    return 0;
}