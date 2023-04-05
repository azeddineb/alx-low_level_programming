#include "main.h"
/**
 * _strlen_recursion - returns the lenght of a string
 * @s: pointer
 * Return: the lenght
 */
int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
		lenght++;
		lenght = lenght + _strlen_recursion(s + 1);
	}
	return (lenght);
}

