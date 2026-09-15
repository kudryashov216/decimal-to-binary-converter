#include <stdio.h>
#include "kernel/kernelCalc.h"
#include "iobound/inputvalue.h"
#include <stdlib.h>

int main()
{

    while (1)
    {

        int value = input();

        printf("binary presentation of number %d: ",value);

        long long *total = decimal_to_bin(value);

        short i = 0;

        while (1)
        {

            int symbol = total[i];

            if (symbol == 0b1010)
            {
                break;
            }

            printf("%d",symbol);

            i++;
        }

        printf("\n");

        free(total);
    }

    return 0;
}