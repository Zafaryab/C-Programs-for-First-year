#include <stdio.h>
void main()
{
    int n, rem, sod = 0;
    printf("Enter the value: ");
    scanf("%d", &n); 
    while (n > 0)
    {
        rem = n % 10;    
        sod = sod + rem;         
        n = n / 10;   
    }
    printf("Sum of Digits = %d", sod);
}