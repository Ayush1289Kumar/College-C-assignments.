#include <stdio.h>

int main()
{
    // W.A.P to find whether the gender in male, female or Transgender.

    char gender;

    printf("Choose whether (M,F,T): ");
    scanf("%c", &gender);

    if (gender == 'm' || gender == 'M')
        printf("Male");

    else if (gender == 'f' || gender == 'F')
        printf("Female");

    else if (gender == 't' || gender == 'T')
        printf("Transgender");

    else
        printf("Please enter a valid value.... (M/F/T)");

    return 0;
}