#include <stdio.h>

int main()
{
    // W.A.P to find the day week from character entered by the user.

    char date;

    printf("Enter a character to find the day:\n");
    printf("(M=Mon, t=Tue, W=Wed, T=Thu, F=Fri, s=Sat, S=Sun): ");
    scanf("%c", &date);

    // Using switch case:

    switch (date)
    {
    case 'M':
    case 'm':
        printf("Monday\n");
        break;
    case 't':
        printf("Tuesday\n");
        break;
    case 'W':
    case 'w':
        printf("Wednesday\n");
        break;
    case 'T':
        printf("Thursday\n");
        break;
    case 'F':
    case 'f':
        printf("Friday\n");
        break;
    case 's':
        printf("Saturday\n");
        break;
    case 'S':
        printf("Sunday\n");
        break;

    default:
        printf("Invalid input, please enter from the specified ones.");
    }
}