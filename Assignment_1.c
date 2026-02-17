#include <stdio.h>

void Program1();
void Program2();
void Program3();
void Program4();
void Program5();
void Program6();
void Program7();
void Program8();
void Program9();
void Program10();
void Program11();
void Program12();
void Program13();
void Program14();
void Program15();
void Program16();
void Program17();
void Program18();
void Program19();
void Program20();
void Program21();
void Program22();
void Program23();
void Program24();

int main()
{
    // 1. WAP to print "Hello"
    Program1();

    // 2. WAP to accept three numbrs & multiply all three
    Program2();

    // 3. WAP to read two numbers and display the sum.
    Program3();

    // 4. WAP to enter a number and display it's cube.
    Program4();

    // 5. WAP to enter student's roll number, 3 subject paper Marks. Calculate the total marks and average.
    Program5();

    // 6. WAP to calculate the simple interest
    //       formula SI = (P*R*T)/100
    Program6();

    // 7. WAP to swap two numbers using third variable.
    Program7();

    // 8. WAP to swap two numbers without using third variable.
    Program8();

    // 9. WAP to input an integer and display its first 3 multiples.
    Program9();

    // 10. WAP to convert seconds into hours minutes and seconds....
    Program10();

    // 11. WAP to convert Celsius temperature to Fahrenheit
    //    (F=1.8*C+32)
    Program11();

    // 12. WAP to convert Fahrenheit temperature to Celsius
    // (C=(F-32)*5/9)
    Program12();

    // 13. WAP to convert litres into gallon
    // 1 gallon = 3.471 litres
    Program13();

    // 14. WAP to convert inches into foot
    //  1 foot = 12 inches
    Program14();

    // 15. WAP to calculate area of right angle triangle.
    // Area = 1/2(b*h)
    Program15();

    // 16. WAP to calculate Area and Perimeter of circle
    //   area = 3.14*r*r   , perimeter = 2* 3.14 *r
    Program16();

    // 17. WAP to calculate volume of cone
    // volume = 0.33 * 3.14 *r*r*h
    Program17();

    // 18. WAP to find sum of 5 digit number.
    Program18();

    // 19. WAP to reverse a five digit number.
    Program19();

    // WAP to evaluate the expression 6 * 2 / (2 + 1 * 2 / 3 + 6) + 8 * (8 / 4)
    Program20();

    // WAP bitwise AND, OR, XOR, left shift and Right shift.
    Program21();

    // WAP to input and print the name, age of student ( using strings )
    Program22();

    // WAP to input the name,marks in three subjects and calculate total marks, percentage and display.
    Program23();

    // WAP input the name,basic salary and calculate DA,HRA,IT, and PF
    // DA = 25 % OF BS,
    // HRA = 10 % OF BS,
    // PF = 5 % OF BS AND
    // IT = 10 % OF BS.
    // Calculate the Net Salary = (BS + DA + HRA) - (IT + PF)
    Program24();
}

void Program1()
{
    printf("Hello\n\n");
}

void Program2()
{
    int num1, num2, num3;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    printf("Multiplication of %dX%dX%d is %d\n\n", num1, num2, num3, (num1 * num2 * num3));
}

void Program3()
{
    int num1 = 17;
    int num2 = 8;

    printf("Num1 = %d\nNum2 = %d\nSum = %d\n\n", num1, num2, (num1 + num2));
}

void Program4()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Cube: %d\n\n", num * num * num);
}

void Program5()
{
    int roll_number;

    float marks_sub1, marks_sub2, marks_sub3, total, average;

    printf("Enter Roll number: ");
    scanf("%i", &roll_number);

    printf("Enter marks in subject 1: ");
    scanf("%f", &marks_sub1);

    printf("Enter marks in subject 2: ");
    scanf("%f", &marks_sub2);

    printf("Enter marks in subject 3: ");
    scanf("%f", &marks_sub3);

    total = marks_sub1 + marks_sub2 + marks_sub3;

    average = total / 3;

    printf("Roll number : %i\nTotal : %.2f\nAverage : %.2f\n\n", roll_number, total, average);
}

void Program6()
{
    double principle_amount;
    int rate, time;
    double Simple_interest;

    printf("Enter Prinicple amount: ");
    scanf("%lf", &principle_amount);

    printf("Enter Rate of interest: ");
    scanf("%d", &rate);

    printf("Enter Time(in years): ");
    scanf("%d", &time);

    Simple_interest = (principle_amount * rate * time) / 100;

    printf("Simple Interest: %.2lf\n\n", Simple_interest);
}

void Program7()
{
    int num1 = 8;
    int num2 = 17;
    int temp;

    printf("Before swaping: num1 = %d num2 = %d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swaping: num1 = %d num2 = %d\n\n", num1, num2);
}

void Program8()
{
    int num1 = 2;
    int num2 = 8;

    printf("Before swaping: num1 = %d num2 = %d\n", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("Before swaping: num1 = %d num2 = %d\n\n", num1, num2);
}

void Program9()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("First three multiples of %d: ", num);
    for (int i = 1; i <= 3; i++)
    {
        printf(" %d ", i * num);
    }
    printf("\n\n");
}

void Program10()
{
    long seconds;

    printf("Enter seconds: ");
    scanf("%li", &seconds);

    const int VAL = 60;

    long minutes = seconds / VAL;
    long hours = minutes / VAL;

    printf("Hours: %li\nMinutes: %li\nSeconds: %li\n\n", hours, minutes, seconds);
}

void Program11()
{
    float c, f;

    printf("Enter temperature in Celsius: ");

    scanf("%f", &c);

    f = 1.8 * c + 32;

    printf("Temperature in Fahrenheit is %.2f\n\n", f);
}

void Program12()
{
    float f, c;

    printf("Enter temperature in Fahrenheit: ");

    scanf("%f", &f);

    c = (f - 32) * 5 / 9;

    printf("Temperature in Celsius is %.2f\n\n", c);
}

void Program13()
{
    float litre, gallon;

    printf("Enter Volume in litres: ");

    scanf("%f", &litre);

    gallon = litre / 3.471; // considering 1 gallon = 3.471 litres

    printf("Volume in gallon is  %.2f\n\n", gallon);
}

void Program14()
{
    float inch, foot;

    printf("Enter value in Inch: ");

    scanf("%f", &inch);

    foot = inch / 12;

    printf("Value in Foot is %.2f\n\n", foot);
}

void Program15()
{
    float base, height, area;

    printf("Base: ");
    scanf("%f", &base);

    printf("Height: ");
    scanf("%f", &height);

    area = 1.0 / 2.0 * (base * height); // or we can do area = 0.5 *(base*height)

    printf("Area: %.2f\n\n", area);
}

void Program16()
{
    int radius;
    float perimeter, area;
    const float PI = 3.14;

    printf("Radius: ");
    scanf("%d", &radius);

    perimeter = 2.0 * PI * radius;

    area = PI * radius * radius;

    printf("Perimeter: %.2f\nArea: %.2f\n\n", perimeter, area);
}

void Program17()
{
    float radius, height, volume;
    const float PI = 3.14;

    printf("Radius: ");
    scanf("%f", &radius);

    printf("Height: ");
    scanf("%f", &height);

    volume = 0.33 * PI * radius * radius * height;

    printf("Volume: %.2f\n\n", volume);
}

void Program18()
{
    int num;

    printf("Enter a five digit number: ");
    scanf("%d", &num);

    int sum = 0;

    int rem;

    for (int i = 0; i < 5; i++)
    {

        rem = num % 10;
        num = num / 10;
        sum = sum + rem;
    }
    printf("Sum = %d\n\n", sum);
}

void Program19()
{
    int num, rem;
    int rev = 0;

    printf("Enter a 5 digit number: ");
    scanf("%d", &num);

    for (int i = 5; i > 0; i--)
    {
        rem = num % 10;
        num = num / 10;

        rev = rev * 10 + rem;
    }
    printf("Reversed number: %d\n\n", rev);
}

void Program20()
{
    double result;

    result = 6 * 2 / (2 + 1 * 2 / 3.0 + 6.0) + 8 * (8.0 / 4.0);

    printf("Result of expression: %.2f\n\n", result);
}

void Program21()
{
    int a = 8; // Binary: 1000
    int b = 2; // Binary: 0010

    // 1. Bitwise AND (&): Sets bit to 1 if BOTH bits are 1
    printf("a & b  = %d\n", (a & b)); // 1000 & 0010 = 0000 (0)

    // 2. Bitwise OR (|): Sets bit to 1 if AT LEAST one bit is 1
    printf("a | b  = %d\n", (a | b)); // 1000 | 0010 = 1010 (10)

    // 3. Bitwise XOR (^): Sets bit to 1 if bits are DIFFERENT
    printf("a ^ b  = %d\n", (a ^ b)); // 1000 ^ 0010 = 1010 (10)

    // 4. Left Shift (<<): Shifts bits to the left
    printf("a << 1 = %d\n", (a << 1)); // 1000 << 1 = 10000 (16)

    // 5. Right Shift (>>): Shifts bits to the right
    printf("a >> 1 = %d\n", (a >> 1)); // 1000 >> 1 = 0100 (4)

    // 6. Left Shift (<<): Shifts bits to the left
    printf("b << 2 = %d\n", (b << 2)); // 0010 << 2 = 1000 (8)

    // 7. Right Shift (>>): Shifts bits to the right
    printf("b >> 2 = %d\n\n", (b >> 2)); // 0010 >> 2 = 0000 (0)
}

void Program22()
{
    int age;
    char name[20];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("\nName: %s\nAge: %d\n\n", name, age);
}

void Program23()
{
    char name[20];
    float sub1, sub2, sub3, total, percentage;

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter marks obtained in subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks obtained in subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks obtained in subject 3: ");
    scanf("%f", &sub3);

    total = sub1 + sub2 + sub3;

    percentage = total / 3;

    printf("Name: %s\nTotal marks: %.2f\nPercentage: %.2f\n\n", name, total, percentage);
}

void Program24()
{
    char name[20];
    double basic_salary, DA, HRA, PF, IT, net_salary;

    printf("Enter name: ");
    scanf("%s", &name);

    printf("Enter basic salary: ");
    scanf("%lf", &basic_salary);

    DA = 0.25 * basic_salary;
    HRA = 0.1 * basic_salary;
    PF = 0.05 * basic_salary;
    IT = 0.1 * basic_salary;

    net_salary = (basic_salary + DA + HRA) - (IT + PF);

    printf("Basic Salary: %.2lf\n", basic_salary);
    printf("DA:  %.2lf\nHRA: %.2lf\nPF:  %.2lf\nIT:  %.2lf\n", DA, HRA, PF, IT);
    printf("Net Salary: %.2lf\n\n", net_salary);
}