#include <stdio.h>

int main()
{
    // WAP to print the table of any number entered by the user.

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf(" %d x %d = %d\n", num, i, num * i);
    }

    return 0;
}