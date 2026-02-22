#include <stdio.h>

int main()
{
    /*
    WAP to calculate the electricity unit , A surcharge of 20% is applicable
    on total unit
    0-50 units – 0.50per unit
    51- 150 units – 0.75per unit
    151-250 units -  1.20 per unit
    >250 units – 1.50 per unit
    */
    int unit;
    float total_charges, charges = 0;

    printf("Enter Electricity consumed in units: ");
    scanf("%d", &unit);

    if (unit >= 0 && unit <= 50)
    {
        charges += unit * 0.5;
    }
    else if (unit > 50 && unit <= 150)
    {
        charges += 50 * 0.5 + (unit - 50) * 0.75;
    }
    else if (unit > 150 && unit <= 250)
    {
        charges += 50 * 0.5 + 100 * 0.75 + (unit - 150) * 1.20;
    }
    else if (unit > 250)
    {
        charges += 50 * 0.5 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
    }

    total_charges = charges * 1.20;

    printf("Electricity Bill = %.2f", total_charges);

    return 0;
}