#include <stdio.h>

int main()
{
    /*
    WAP to check the character whether the character entered is vowel or not
    using switch only
    */
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    switch (character)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel");
        break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel");
        break;

    default:
        printf("Cononant");
    }
    return 0;
}
