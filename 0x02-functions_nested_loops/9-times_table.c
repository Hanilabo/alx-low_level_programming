#include<stdio.h>
#include"main.h"

/**
 * times_table- prints table
 */
void times_table(void)
{
    for (int row = 0; row <= 9; row++) {
        for (int col = 0; col <= 9; col++) {
            int result = row * col;
            printf("%2d", result);
            if (col < 9) {
                printf(", ");
            } else {
                printf("$\n");
            }
        }
    }
}
