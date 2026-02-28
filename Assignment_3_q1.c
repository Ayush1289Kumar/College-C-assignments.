#include <stdio.h>

int main()
{
    // WAP to print all the numbers which are divisible by 5 from 1 to 50.
    printf("Numbers divisble by 5 from 1 to 50 :\n");

    for (int i = 1; i <= 50; i++)
    {
        if (i % 5 == 0)
            printf(" %d ", i);
    }
    return 0;
}