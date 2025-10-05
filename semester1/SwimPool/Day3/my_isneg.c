#include <stdio.h>

int my_isneg (int n) // Function to check if a number is negative(N) or positive(P)
{
    if (n < 0)
        {printf("N");}
    else
        {printf("P");}
    
    return 0;
}


int main(int n)
{
    for (n = -1; n < 20; n *= -2)
        my_isneg(n);
    return 0;
}
