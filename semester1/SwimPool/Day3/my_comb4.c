 /*
 ** EPITECH PROJECT, 2023
 ** Function my_comb4
 ** [File description:]
 ** A function that displays, in ascending order, all the numbers 
 ** composed  by 4 different digits numbers 
 ** Given 4 digits (all different), only the smallest number 
 ** composed by those digits is displayed. 
 */

#include <stdio.h> 
#include <unistd.h>
#include <stdlib.h>
#include "my_putchar.c"

int my_comb4(void)
{
    int count = 0;
    int length = 4;

    for (int i=0 ; i <= 9 -length + 1 ; i++)
    {
        for (int j = i+1 ; j <= 9 ; j++)
        {
            for (int k = j+1; k <= 9; k++)
            {
                for (int l= k+1; l <=9; l++)
                {
                    for(int m = l+1; m <= 9; m++)
                    {
                        for (int n = m + 1; n <= 9; n++)
                        {
                            for (int o = o + 1; o <= 9; o++)
                            {
                                
                            }
                        }
                    }
                }
            }
        }
    }
}


int main(void)
{
    my_comb4();
    return 0;
}