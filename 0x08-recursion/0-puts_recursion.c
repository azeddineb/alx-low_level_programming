#include "main.h"
/**
 * _puts_recursion - prints a string, follwed by a new line
 * @s: pointer
 */
void _puts_recursion(char *s)
{
	if (*s != NULL)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

