

/**
 * print_alphabet - pronts the letters of tge english alpha
 *
 * Return: void
 *
 */

#ifndef PRNT_ALPHA_H
#define PRNT_ALPHA_H

void print_alphabet(void);

#endif

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
