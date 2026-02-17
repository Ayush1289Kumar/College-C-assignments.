#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int start, end;
    int is_palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // set the positions
    start = 0;
    end = strlen(str) - 1;

    // loop runs until the two postions meet in the middle
    while (start < end)
    {
        if (str[start] != str[end])
        {
            is_palindrome = 0; // not a palindrome.
            break;             // stop checking immediately.
        }
        start++; // move forward
        end--;   // move backward
    }

    if (is_palindrome == 1)
        printf("%s is a Palindrome", str);
    else
        printf("%s is Not a Palindrome", str);

    return 0;
}