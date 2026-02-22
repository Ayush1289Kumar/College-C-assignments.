#include <stdio.h>

int main()
{
    /*
    WAp to display the day of week depending upon the first character of day
    entered by user.
    */

    char day;

    printf("Enter a character to find the day: ");
    scanf("%c", &day);

    switch (day)
    {
    case 'M':
    case 'm':
        printf("Monday");
        break;

    case 'T':
        printf("Tuesday");
        break;
    case 'W':
    case 'w':
        printf("Wednesday");
        break;
    case 't':
        printf("Thursday");
        break;
    case 'F':
    case 'f':
        printf("Friday");
        break;
    case 'S':
        printf("Saturday");
        break;
    case 's':
        printf("Sunday");
        break;
    default:
        printf("Enter a valid value.....");
    }
    return 0;
}