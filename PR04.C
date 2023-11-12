//PR.4. Write a C program to find the area of rectangle, cube and triangle.(Formula are : Rectangle = l * b * h, triangle = (l * b) * 0.5, cube = L * L * L.

#include <stdio.h>
#include <conio.h>

void main()
{
    float t;
    int l, b, h, r, c;

    // clrscr();

    printf(" Enter the Value of l : ");
    scanf("%d", &l);

    printf("\n Enter the of b : ");
    scanf("%d", &b);

    printf("\n Enter the value of h : ");
    scanf("%d", &h);

    r = l * b * h;
    c = l * l * l;
    t = (l * b) * 0.5;

    printf("\n Rectangle :%d ", r);
    printf("\n Cube : %d", c);
    printf("\n Triangle : %f \n", t);

    getch();
}


// OUTPUT
// Enter the Value of l : 5

// Enter the of b : 5

// Enter the value of h : 5

// Rectangle :125
// Cube : 125
// Triangle : 12.500000