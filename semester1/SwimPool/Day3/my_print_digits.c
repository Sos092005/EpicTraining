#include <stdio.h>
#include "my_putchar.c"

int my_print_digits(void) // Function to print the english alphabet in lowercase from a to z
{
    for (int i = 0 ; i < 10; i++) 
        my_putchar('0' + i);
    
    return 0;
}   


int main(void)
{
    my_print_digits();
    return 0;
}