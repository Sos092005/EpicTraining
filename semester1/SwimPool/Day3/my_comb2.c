 /*
 ** EPITECH PROJECT, 2023
 ** Function my_comb2
 ** [File description:]
 ** A function that displays, in ascending order, all the numbers 
 ** composed  by 2 different digits numbers 
 ** Given two digits (all different), only the smallest number 
 ** composed by those digits is displayed. 
 */

#include <stdio.h> 
#include <unistd.h>
#include <stdlib.h>
#include "my_putchar.c"

int my_comb2(void)
{
    int count = 0;
    int length = 2;

    for (int i=0 ; i <= 9 -length + 1 ; i++)
    {
        for (int j = i+1 ; j <= 9 ; j++)
        {
            my_putchar('0' + i);
            my_putchar('0' + j);
            my_putchar('\n');
            count ++;           
        }
    }
}


int main(void)
{
    my_comb2();
    return 0;
}