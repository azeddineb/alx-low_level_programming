#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: lg the lenght
 */
int _strlen(char *s)
{
	int lg = 0;

	while (*s != '\0')
	{
		lg++;
		s++;
	}
	return (lg);
}
