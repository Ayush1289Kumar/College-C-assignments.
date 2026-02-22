#include <stdio.h>

int main()
{
    /*
    to check whether the year is leap or not .(If divisible by 4, then leap year.
    Further it should be divisible by 100, should be divisible by 400 , then leap year.
        Ex- 1600 is leap year but 1500 is not leap year.
    */
    int year;

    printf("Enter Year: ");
    scanf("%d", &year);

    if (year % 4 == 0 && !(year % 100 == 0) || year % 400 == 0)
        printf("%i is a leap year.", year);

    else
        printf("%i is Not a leap year.", year);

    return 0;
}