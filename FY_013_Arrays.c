#include <stdio.h>
void main()
{
    int index = 0, size, num; 
    printf("Enter the size: ");
    scanf("%d", &size);

    int array[size];

    while (index < size)
    {
        printf("Enter the even value: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            array[index] = num;
            index++;
        }
        else
        {
            printf("Please Enter Even number only\n");
        }
    }

    printf("\nDisplay Array:\n");
    for (index = 0; index < size; index++)
    {
        printf("%d\t", array[index]);
    }

}