#include <stdio.h>

int main()
{
    // WAP to print even numbers from 1 to 20 in ascending order.
    printf("Even numbers from 1 to 20 in ascending order:\n");

    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
            printf(" %d ", i);
    }
    return 0;
}