#include <stdio.h>

int main()
{
    // WAP to implement pointer to pointer.

    int num = 8;

    int *ptr = &num;
    int **pptr = &ptr;
    printf("Pointer to pointer of %p is %p", ptr, **pptr);

    return 0;
}