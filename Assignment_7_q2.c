#include <stdio.h>

int main()
{
    // WAP to display address and value using both arrays and pointers.

    int arr[] = {34, 98, 0, 12, 1};
    int *ptr = arr;

    printf("Value at %p is %d\n", ptr, *ptr);

    printf("Value at %p is %d\n", ptr + 1, *(ptr + 1));

    printf("Value at %p is %d\n", ptr + 2, *(ptr + 2));

    printf("Value at %p is %d\n", ptr + 3, *(ptr + 3));

    printf("Value at %p is %d\n", ptr + 4, *(ptr + 4));

    return 0;
}
