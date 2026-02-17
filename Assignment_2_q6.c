#include <stdio.h>

int main()
{
    // W.A.P to check whether employee is a senior accountant,
    // accountant,computer operator,typist or peon.
    /*
    Input BS, calculate DA, HRA, IT,PF . DA= 25% OF BS , HRA= 15% OF BS
    IT=10% OF BS, PF =5% OF BS . Calculate net salary and find the post
    of employee.

    If NS>=80000, Senior Accountant, If NS>=60000, Accountant .
    If NS>=40000, Computer Operator, If NS>=20000, Typist else If NS<20000, Peon.
    */

    double basic_salary, DA, HRA, PF, IT, net_salary;

    printf("Enter basic salary: ");
    scanf("%lf", &basic_salary);

    DA = 0.25 * basic_salary;
    HRA = 0.15 * basic_salary;
    PF = 0.05 * basic_salary;
    IT = 0.1 * basic_salary;

    net_salary = (basic_salary + DA + HRA) - (IT + PF);

    if (net_salary >= 80000)
        printf("Senior Accountant");

    else if (net_salary >= 60000)
        printf("Accountant");

    else if (net_salary >= 40000)
        printf("Computer Operator");

    else if (net_salary >= 20000)
        printf("Typist");

    else if (net_salary < 20000)
        printf("Peon");

    return 0;
}