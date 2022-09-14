#include <stdio.h>

/**
 * print_alphabet - pronts the letters of tge english alpha
 *
 * Return: void
 *
 */

void print_alphabet(void);

print_alphabet()
{
        char *apb = "abcdefghijklmnopqrstuvwxyz\n";
        int i = 0;

        while (i < 26)
        {
                putchar(apb[i]);
                i++;
        }
}
