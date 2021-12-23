#include <stdio.h>
int main()
{
    float a, b, result;
    int choice;
    printf("Enter the value of a:");
    scanf("%f", &a);
    printf("Enter the value of b:");
    scanf("%f", &b);
    printf("Kindly press\n1 for Addition\n2 for Multiplication\n3 for Difference\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = a + b;
        break;

    case 2:
        result = a * b;
        break;

    case 3: // can even write cases on characters eg. case 'a'
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
    //try to include csses for other operators as well

    printf("Result = %g", result); //Do let me know how is the result printing with %g different from %f
}