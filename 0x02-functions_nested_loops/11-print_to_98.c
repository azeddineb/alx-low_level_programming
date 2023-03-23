#include "main.h"
/**
 * print_to_98 - prints all numbers from n to 98
 * @n: the number to print from
 */
void print_to_98(int n)
{
	int i;
	
	if (i <= 98)
	{
		i = n;
		while (n <= 98)
		{
			_putchar(i + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			i++;
		}
	}
	else if (n > 98)
	{
		i = n;
		while (i >=98)
		{
			_putchar(i + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			i--;
		}
	}
}
