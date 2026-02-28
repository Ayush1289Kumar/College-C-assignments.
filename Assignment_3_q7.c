#include <stdio.h>

int main()
{
    // WAP to find the largest among any 10 numbers entered by the user.

    int nums[10];
    int max, num = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }
    max = nums[0];

    while (num < 10)
    {
        if (nums[num] > max)
            max = nums[num];
        num++;
    }

    printf("Largest number: %d", max);

    return 0;
}