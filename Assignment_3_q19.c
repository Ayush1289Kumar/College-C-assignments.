#include <stdio.h>

int main()
{
    // WAP to print the Fibonnaci series.
    //     1,1,2,3,5,8,...........

    int a = 0, b = 1, next;

    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", b);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}