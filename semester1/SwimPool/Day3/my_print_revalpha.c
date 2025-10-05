#include <stdio.h>


int my_print_revalpha(void) // Function to print the english alphabet in lowercase from z to a
{
    int asciiValue = 97; // ASCII value of 'a'

    for (int i = 25 ; i >= 0; i--) 
        {printf("%c", asciiValue + i);}
    
    return 0;
}   


int main(void)
{
    my_print_revalpha();
    return 0;
}
