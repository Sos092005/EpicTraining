 /*
 ** EPITECH PROJECT, 2023
 ** Function my_print_comb
 ** [File description:]
 ** A function that displays, in ascending order, all the numbers 
 ** composed  by three different digits numbers 
 ** (012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789).
 ** Given three digits (all different), only the smallest number 
 ** composed by those digits is displayed. 
 */

#include <stdio.h> 
#include <unistd.h>
#include "my_putchar.c"

int my_print_comb(void)
{
    int count = 0;
    int length = 3;

    for (int i=0 ; i <= 9 -length + 1 ; i++)
    {
        for (int j = i+1 ; j <= 9 ; j++)
        {
            for (int k = j + 1 ; k <= 9 ; k++)
            {
                my_putchar('0' + i);
                my_putchar('0' + j);
                my_putchar('0' + k);
                my_putchar('\n');
                count ++;
            }            
        }
    }
}

int main(void)
{
    my_print_comb();
    return 0;
}