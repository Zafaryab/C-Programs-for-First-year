#include <stdio.h>
int main()
{
    int a = 50, b = 10, max, min;

    max = (a > b) ? a : b;
    min = (a < b) ? a : b;

    //TRY TO WRITE A LOG FOR FINDING THE LARGEST AND SMALLEST OF THE THREE NUMBERS

    printf("Max Value: %d\nMin Value: %d", max, min);
}