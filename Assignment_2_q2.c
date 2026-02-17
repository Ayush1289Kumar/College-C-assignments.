#include <stdio.h>

int main()
{
    // W.A.P to check whether a number is odd or even.

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
        printf("Zero is neither Odd nor Even.");

    else if (num % 2 == 0)
        printf("%d is Even", num);
    else
        printf("%d is Odd", num);

    return 0;
}
