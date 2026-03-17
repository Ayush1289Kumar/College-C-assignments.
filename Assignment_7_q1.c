#include <stdio.h>

int main()
{
    // WAP to use pointers basic and display address using pointers in various ways.

    int num = 17;

    int *ptr = &num; // Declaring and assining value to pointer

    printf("%p\n", &num);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);

    return 0;
}