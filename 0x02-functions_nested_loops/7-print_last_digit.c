#include "main.h"
/**
 * print_last_digit - return and print the last digit of a number
 * @n: the given number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int nbr;

	nbr = n % 10;
	_putchar(nbr);
	return (nbr);
}

