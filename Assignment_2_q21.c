#include <stdio.h>

int main()
{
    /*
    Write a program to find the area any switch statement
    1. Area of circle
    2. Area of Rectangle
    3. Area of right angled triangle.
    */

    int choice;
    float radius, length, width, base, height;

    printf("1. Area of circle\n2.Aread of Rectangle\n3.Area of right angled triangle.\nYour choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter Radius: ");
        scanf("%f", &radius);
        printf("Area of circle: %.2f", 3.14 * (radius * radius));
        break;

    case 2:
        printf("Enter Length: ");
        scanf("%f", &length);
        printf("Enter Width: ");
        scanf("%f", &width);
        printf("Area of rectangle: %.2f", length * width);
        break;

    case 3:
        printf("Enter Base: ");
        scanf("%f", &base);

        printf("Enter Height: ");
        scanf("%f", &height);

        printf("Area of triangle: %.2f", 0.5 * (base * height));
        break;
    default:
        printf("Enter a valid input...");
    }

    return 0;
}