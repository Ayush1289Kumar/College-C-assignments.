#include <stdio.h>
#include <string.h>

int main()
{
    // WAP  to enter the gender and age and then find the eligibility for
    // marriage.Eligibility condition (Male >= 21 and Female >= 18)

    int age;
    char gender[10];

    printf("Enter gender: ");
    scanf("%s", &gender);

    printf("Enter age: ");
    scanf("%d", &age);

    if ((strcmp(gender, "Male") == 0 || strcmp(gender, "male") == 0 || strcmp(gender, "M") == 0 || strcmp(gender, "m") == 0) && age >= 21)
        printf("You are eligibile for Marriage.");

    else if ((strcmp(gender, "Female") == 0 || strcmp(gender, "female") == 0 || strcmp(gender, "F") == 0 || strcmp(gender, "f") == 0) && age >= 18)
        printf("You are eligibile for Marriage.");

    else
        printf("You are Not eligible for Marriage.");

    return 0;
}