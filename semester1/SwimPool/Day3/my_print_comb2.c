 /*
 ** EPITECH PROJECT, 2023
 ** Function my_print_comb2
 ** [File description:]
 ** Function that displays, in ascending order, all the different combinations
 ** of two two-digit numbers (00 01, 00 02, 00 03, 00 04, 00 05,...
 ** ..,01 99, 02 03, ..., 98 99).
 */

#include <stdio.h> 
#include <unistd.h>
#include "my_putchar.c"

int my_print_comb2(void)
{
    for (int i= 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9 ; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                for (int l = 0; l <= 9; l++)
                {
                    if ((i==k) && (j==l)){
                    }else{
                        my_putchar('0' + i);
                        my_putchar('0' + j);
                        my_putchar(' ');
                        my_putchar('0' + k);
                        my_putchar('0' + l);
                        my_putchar('\n');
                    }
                }
            }
        }
    }
}

int main(void)
{
    my_print_comb2();
    return 0;
}