#include <stdio.h>

int main()
{
    // W.A.P to check eligibility of age to vote

    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age > 18)
        printf("You are eligible");

    else
        printf("You are not eligible");

    return 0;
}