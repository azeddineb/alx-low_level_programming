#include "main.h"

/**
 * _islower - check if a character is lowercase or not
 * @c: the argument to be checked
 * Return: 1 if c is lowercase else 0 
 */
int _islower(int c)
{
	int i = 97;

	while (i <= 122)
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
