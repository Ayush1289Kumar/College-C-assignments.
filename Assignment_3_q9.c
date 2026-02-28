#include <stdio.h>

int main()
{
    // WAP to find the total number of digits in a number entered by user.
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        num = num / 10;
        count += 1;
    }
    printf("No of digits: %d", count);
    return 0;
}