// 30. Arrange the accepted number in accending and decending order.
#include <stdio.h>
#include <conio.h>
void main()
{
    int temp, i, j, no[10], n;
    // clrscr();
    printf("\nEnter Range:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter number: ");
        scanf("%d", &no[i]);
    }
    // Ascending order
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (no[j] > no[j + 1])
            {
                temp = no[j];
                no[j] = no[j + 1];
                no[j + 1] = temp;
            }
        }
    }
    printf("\nAscending Order : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", no[i]);
    }

    // descending order
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (no[j] < no[j + 1])
            {
                temp = no[j];
                no[j] = no[j + 1];
                no[j + 1] = temp;
            }
        }
    }

    printf("\n Descending Order : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \n", no[i]);
    }
}

// Output
// Enter Range:5
// Enter number:50
// Enter number:30
// Enter number:20
// Enter number:60
// Enter number:10

// Ascending Order :
// 10
// 20
// 30
// 50
// 60

// Descending Order :
// 60
// 50
// 30
// 20
// 10