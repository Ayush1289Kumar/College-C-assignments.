#include <stdio.h>

int main()
{
    // WAP to check whether a number is prime or not.

    int num;
    int isprime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {

        if (num % i == 0 && num != 0)
        {
            isprime = 0;
            break;
        }
    }
    if (num == 0)
    {
        printf("%d is neither prime nor composite.", num);
    }
    else if (isprime)
        printf("%d is a Prime number.", num);
    else
        printf("%d is Not a Prime number.", num);

    return 0;
}