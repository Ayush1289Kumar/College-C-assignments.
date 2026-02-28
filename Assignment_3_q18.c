#include <stdio.h>

int main()
{
    // WAP to print a series.
    //      1,4,7,10,13.......100

    int num = 1;

    do
    {
        printf("%d, ", num);
        num = num + 3;
    } while (num <= 100);

    return 0;
}