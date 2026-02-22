#include <stdio.h>

int main()
{
    /*
    WAP to read the roll number , marks of three subjects .Calculate
    the average and display the result according to average
        IF average >= 60 grade A
        IF 50<= Average <60 grade B
        IF 40<= Average <50 grade C
        IF Average <40  reappear
    */

    int roll, maths, phy, chem;
    float avg;

    printf("Enter Roll number: ");
    scanf("%d", &roll);

    printf("Enter marks obtained in physics: ");
    scanf("%d", &phy);

    printf("Enter marks obtained in chemistry: ");
    scanf("%d", &chem);

    printf("Enter marks obtained in maths: ");
    scanf("%d", &maths);

    avg = (float)(phy + chem + maths) / 3;

    if (!(avg > 100 || avg < 0))
    {
        printf("Your average score: %.2f\n", avg);

        if (avg >= 60)
            printf("grade A");

        else if (avg >= 50)
            printf("grade B");

        else if (avg >= 40)
            printf("grade C");

        else if (avg < 40)
            printf("reappear");
    }

    else
        printf("Enter valid scores...");
}