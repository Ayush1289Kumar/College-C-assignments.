#include <stdio.h>

int main()
{
    // WAP  to find the factorial of any given number entered by the user.
    int num;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d is %d ", num, factorial);

    return 0;
}
