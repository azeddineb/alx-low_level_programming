#include "main.h"
/**
 * _strncat - function that concatenates tow strings
 * @dest: string
 * @str: string
 * @n: number of character to concatenate
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *str, int n)
{
	char *dest_end = dest;
	int i = 0;

	while (dest_end != '\0')
	{
		dest_end++;
	}

	while (*str && i < n)
	{
		*dest_end = *str;
		dest_end++;
		str++;
		i++;
	}
	*dset_end = '\0';
	return (dest);
}

