#include <stdio.h>

int main()
{
    // W.A.P to check whether character entered is vowel or consonant.( using logical
    // operators and if else statement ).

    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
        printf("Vowel");

    else if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
        printf("Vowel");

    else
        printf("Consonant");

    return 0;
}