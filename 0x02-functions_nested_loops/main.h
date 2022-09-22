
#ifndef MAIN_H
#define MAIN_H

/**
 * print_alphabet - pronts the letters of tge english alpha
 *
 * Return: void
 *
 */

void print_alphabet(void);

/**
 * _purchar - prints character
 *
 * Return: void
 *
 */

void _putchar(char);

/**
 * print_alphabet_x10 - prints the alphabets 10 time
 *
 * Return: void
 *
 */

void print_alphabet_x10(void);

/**
 * islower - checks if a letter is lowercase or uppercase
 *
 * Return: 1 if its lowercase 0 if its uppercase
 */

int _islower(int);

/**
 * _isalpha - checks if a given int is an alphabet base on ASCII
 *
 * Return: 1 if true amd 0 if not
 */

int _isalpha(int);

/**
 * print_sign - prints corresponding sign to a number based on the size of the number
 *
 * Return: returns 1 if the number is greater than 0, 0 if the number is 0 and -1 if the number is less than zero
 */

int print_sign(int);

/**
 * _abs - gets the absolute value of a passed integer
 *
 * Return: absolute value
 */

int _abs(int);

/**
 * print_last_digit - prints last digit  of a number 
 * 
 * Return: returns the last digit
 */

int print_last_digit(int);

/**
 * jacke_bauer - prints every minutes of the day, starting from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void);

/**
 * times_table - printz the multiplication time table structured
 *
 * Return: void
 */
void times_table(void);
#endif
