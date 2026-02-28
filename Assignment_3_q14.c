#include <stdio.h>
#include <math.h>
int main()
{
    // WAP to check whether a number is Armstrong number or not.
    /*
    An Armstrong number is a number that is equal to the sum of its digits,
    each raised to the power of the number of digits.

    e.g 153 = 3 digits => 1^3 + 5^3 + 3^3 = 3+125+27 = 153
    */

    int num, digit = 0;
    int temp, originalNum, rem, powersum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    originalNum = num;
    while (temp > 0)
    {
        temp = temp / 10;
        digit += 1;
    }

    while (num != 0)
    {
        rem = num % 10;
        powersum += (int)(pow(rem, digit) + 0.5);
        num = num / 10;
    }
    if (powersum == originalNum)
        printf("%d is Armstrong number.", originalNum);
    else
        printf("%d is Not Armstrong number.", originalNum);

    return 0;
}