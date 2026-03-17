#include <stdio.h>

int main()
{
    // WAP to implement pointer and strings.
    char str[] = "Eren";

    char *ptr = str;

    printf("Whole string: %s\n", ptr);
    printf("Value of first char: %c\n", *ptr);
    printf("Address of first char: %p\n", *ptr);

    return 0;
}