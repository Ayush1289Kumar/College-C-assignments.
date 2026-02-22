#include <stdio.h>

int main()
{
    /*
    WAP to find the number of days in the month according to the month
    number entered by the user (using switch statement)
    */

    int month;

    printf("Enter the month number:\n");
    printf("(1=jan,2=feb....): ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days");
        break;

    case 2:
        printf("28/29 days");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days");
        break;

    default:
        printf("Invalid input!!!");
    }
    return 0;
}