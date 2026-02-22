#include <stdio.h>
#include <string.h>

int main()
{
    // WAP to check whether the two names entered by the user are
    // similar or not.

    char str1[20];
    char str2[20];

    printf("Enter first name: ");
    scanf("%s", str1);

    printf("Enter second name: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0)
        printf("Both are similar");
    else
        printf("Both are Not similar");

    return 0;
}
