#include "main.h"
/**
 * _isalpha - check if a given c is a letter
 * @c: given integer
 * Return: 1 if c is a letter else 0
 */
int _isalpha(int c)
{
	int i = 65;

	while (i <= 122)
	{
		if (c == i)
			return (1);
		i++;
	}
	return (0);
}

