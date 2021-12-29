#include <stdio.h>
void main()
{
    float a, b, result;
    //via char too
    char choice;
    printf("Enter the value of a:");
    scanf("%f", &a);
    printf("Enter the value of b:");
    scanf("%f%*c", &b);
    printf("Kindly press\n'a' for Addition\n'm' for Multiplication\n'd' for Difference\nEnter your choice: ");
    scanf("%c", &choice);

    switch (choice)
    {
    case 'a':
        result = a + b;
        break;

    case 'm':
        result = a * b;
        break;

    case 'd': // can even write cases on characters eg. case 'a'
        if (a > b)
        {
            result = a - b;
        }
        else
        {
            result = b - a;
        }
        break;

    default:
        printf("Invalid Choice");
    }

    //Write a logic so that the below printf doesn't get executed in case of invalid choice
    //try to include cases for other operators as well
    
    printf("Result = %g", result); //Do let me know how is the result printing with %g different from %f
}