 /*
 ** EPITECH PROJECT, 2023
 ** Function my_put_nub
 ** [File description:]
 ** A function that displays the number given as a parameter.
 ** It must be able to display all the possible values of an int.
 */

#include <stdio.h> 
#include <unistd.h>
#include "my_putchar.c"

int my_nbr_len ( long long nb );
long long ten_to_pow ( long long nb );
int my_put_nbr ( long long nb );

/*Function that determines the number of digits used for writing an integer*/
int my_nbr_len ( long long nb )
{
    int pow = 10;
    int tmp_nb = 0;
    int digits = 1;

    tmp_nb = nb / pow;
    while(tmp_nb != 0)
    {
        digits += 1;
        pow *= 10;
        tmp_nb = nb / pow;
    }

    return digits;
}

/* Function that raises 10 to pow nb (10*10*10*....*10 (nb times) )*/
long long ten_to_pow ( long long nb )
{
    long long raised = 1;
    for (int i= 1 ; i<= nb; i++)
    {
        raised *= 10;
    }
    return raised;
}

/* Function to print out an integer
** pow: ten raised to some power
*/
int my_put_nbr ( long long nb )
{
    int tmp_nb = nb;
    int length = my_nbr_len(nb);
    long long pow = ten_to_pow(length - 1);
    int digit;

    if (tmp_nb < 0){
        my_putchar('-');
        tmp_nb = tmp_nb * -1;
    }

    for (int i=1; i <= length; i++)
    {
        digit = tmp_nb / pow;
        tmp_nb = tmp_nb - (digit * pow);
        pow /= 10;
        my_putchar('0' + digit);
    }
    return 0;
}

