#include <stdio.h>

int main()
{
    int MINIMUM_METER_CHARGE = 100; // Minimum meter charge Rs 100
    char name[10];
    float charges;
    int unit_consumed;
    double total_charges;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter number of units consumed: ");
    scanf("%d", &unit_consumed);

    if (unit_consumed <= 200)
    { // First 200 units: 80 paise per unit
        charges = unit_consumed * 0.80;
    }

    else if (unit_consumed <= 300)
    { //  Next 100 units: 90 paise per unit
        charges = (200 * 0.80) + ((unit_consumed - 200) * 0.90);
    }
    else
    { // Above 300 units: Rs 1 per unit
        charges = (200 * 0.80) + (100 * 0.90) + ((unit_consumed - 300) * 1.00);
    }

    // Total charge = unit bills + minimum meter charge.
    total_charges = charges + MINIMUM_METER_CHARGE;

    // If bill exceeds Rs 400, add 15% surcharge
    if (total_charges > 400)
    {
        total_charges = total_charges + (total_charges * 0.15);
    }

    // Final Output
    printf("\n----- Electricity Bill -----\n");
    printf("Name: %s\n", name);
    printf("Unit consumed: %d\n", unit_consumed);
    printf("Total Amount to Pay: Rs. %.2lf\n", total_charges);

    return 0;
}