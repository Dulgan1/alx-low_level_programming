#include "main.h"

/**
 * print_alphabet - prints letters of the english alpha
 *
 * Return: void
 *
 */

void print_alphabet()
{
        char *apb = "abcdefghijklmnopqrstuvwxyz\n";
        int i = 0;

        while (i < 26)
        {
                putchar(apb[i]);
                i++;
        }
}
