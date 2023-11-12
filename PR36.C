// 36. Write a C program to read marks and your program will display grade.

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
    {
        printf("Grade: Dist\n");
    }
    else if (marks >= 60 && marks < 80)
    {
        printf("Grade: First\n");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("Grade: Second\n");
    }
    else if (marks >= 35 && marks < 50)
    {
        printf("Grade: Pass\n");
    }
    else if (marks >= 0 && marks < 35)
    {
        printf("Grade: Fail\n");
    }
    else
    {
        printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
    }

    return 0;
}