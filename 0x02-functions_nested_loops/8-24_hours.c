#include<stdio.h>
#include"main.h"

/**
 * jack_bauer- prints every munite of the dar
 */
void jack_bauer(void)
{
    int hf, hs, mf, ms;

    for (hf = 0; hf < 24; hf++) {
        for (hs = 0; hs < 10; hs++) {
            for (mf = 0; mf < 6; mf++) {
                for (ms = 0; ms < 10; ms++) {
                    _putchar('0' + hf / 10); /* Print the tens digit of hour */
                    _putchar('0' + hf % 10); /* Print the ones digit of hour */
                    _putchar(':');
                    _putchar('0' + mf); /* Print the tens digit of minute */
                    _putchar('0' + ms); /* Print the ones digit of minute */
                    _putchar('\n'); /* Move to the next line */
                }
            }
        }
    }
}
