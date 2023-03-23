#include "main.h"
/**
 * print_to_98 - prints all numbers from n to 98
 * @n: the number to print from
 */
void print_to_98(int n)
{
	int i;

	_putchar(n + '0');
	if (n < 98)
	{
		for (i = n + 1; i <= 98; i++)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(n + '0');
		}
	}
	else if (n > 98)
	{
		for (i = n - 1; i >= 98; i--)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
