#include <stdio.h>

int main()
{
    /*
    W.A.P to check whether the student stood first ,second , third or fail in PCM.
    >80%  ---- first position
    >60% ----- second position
    >40% ----- third position
    <40% ----- Fail
    */
    float score;
    printf("Enter your score(out of 100): ");
    scanf("%f", &score);

    if (score > 80)
        printf("First Position");

    else if (score > 60)
        printf("Second Position");

    else if (score > 40)
        printf("Third position");

    else
        printf("Fail");

    return 0;
}