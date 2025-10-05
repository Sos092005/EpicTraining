#include <stdio.h>

int my_print_alpha(void) // Function to print the english alphabet in lowercase from a to z
{
    int asciiValue = 97; // ASCII value of 'a'

    for (int i = 0 ; i < 26; i++) 
        {printf("%c", asciiValue + i);}
    
    return 0;
}   


int main(void)
{
    my_print_alpha();
    return 0;
}