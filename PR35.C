// 35. Write a C program to prepare pay slip using following data.

#include <stdio.h>
#include <conio.h>
void main()
{
    int da, hra, ma = 300, pf, gross, net;
    int basic;
    // clrscr();
    printf("Enter Basic Salary:");
    scanf("%d", &basic);

    da = basic / 10;

    hra = (basic * (750 / 100)) / 100;
    pf = (basic * (1250 / 100)) / 100;

    gross = basic + da + hra + ma;
    net = gross - pf;

    printf("Your Gross Salary is:%d \n", gross);
    printf("Your Net Salary is %d\n", net);
}