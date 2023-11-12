// 40. Write a C program to display following output on the screen.

#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d ", j % 2);
        }
        printf("\n");
    }
}