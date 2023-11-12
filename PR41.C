// 41. Write a C program to display following output on the screen.

#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf(" "); // Print Space
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n"); // New line
    }
}