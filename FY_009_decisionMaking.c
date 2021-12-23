#include <stdio.h>
int main()
{
    int a = 5, b = 15, c = 1, l;

    //simple if
    if (c == 1)     //it checks if value of c is 1 then add 5 to it
    {
        c += 5;     //c becomes 6
    }
    
    //if-else example
    if (a > b)      
    {
        l = a;      //assigns value of a to l, if a is greater
    }
    else
    {
        l = b;      //assigns value of b to l, if b is greater
    }

    //nested if example
    if (a > b)
    {
        if( c > 1 )
        {
            b = 0;
        }
    }

    //the above, line 23-29, can also be written using Logical Operators in one IF
    if( a > b && c > 1 )
    {
        b = 0;
    }

    //nested if-else example
    if (a > b)
    {
        if( c > 1 )
        {
            b = 0;
        }
        else
        {
            b = 10;
        }
    }
    else
    {
        if( c < 1 )
        {
            a = 0;
        }
        else
        {
            a = 10;
        }
    }
}