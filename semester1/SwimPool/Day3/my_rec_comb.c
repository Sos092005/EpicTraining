#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>

int my_print_comb(void)
{
    //prints all three digits numbers where digits are all differents
    int count = 0;
    int length = 1;

    for (int i=0 ; i <= 9 -length + 1 ; i++)
    {
        putchar('0' + i);
        putchar('\t');
        count ++;
    }

    printf("\n %d", count);
    printf("\n ");

}


    //prints all three digits numbers where digits are all differents
    
    int i = 0;
    int main(int i)
    {
        if (i <= 9)
        {
            putchar('0' + i);
            putchar('\t');
            i++;
            main(i);
        }

        return 0;
    }
