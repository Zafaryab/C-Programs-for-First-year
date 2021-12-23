#include <stdio.h>
int main()
{
    float price, discount = 0, price_final;
    printf("Enter the price: ");
    scanf("%f", &price);
    
    if((price > 2000))
        {
            discount = .1 * price; //10% discount for price above 2000
        }
    else 
    {
        if(price>1000)
        {
            discount = .05 * price; //5% discount for price between 1001 to 2000 
        }
    }
    
    price_final = price - discount;

    printf("Price\t\t: %7.2f\nDiscount\t: %7.2f\nAmount\t\t: %7.2f", price, discount, price_final);
}