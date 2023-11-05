// PR.6. Write a C program to evaluate simple interest I = P * R * N / 100.
// Variable name of purpose
// I = Interest Amount.
// P = Principal Amount.
// R = Rate of Interest per year as a percent.
// N = Time Periods involved.

#include <stdio.h>
#include <conio.h>

void main()
{
    float p, r, n, i;

    // clrscr();

    printf("Enter p : ");
    scanf("%f", &p);

    printf("Enter r : ");
    scanf("%f", &r);

    printf("Enter n : ");
    scanf("%f", &n);

    i = p * r * n / 100;

    printf("Intrest : %.2f", i);
    getch();
}

// OUTPUT
// Enter p : 1000
// Enter r : 5
// Enter n : 2
// Intrest : 100.00