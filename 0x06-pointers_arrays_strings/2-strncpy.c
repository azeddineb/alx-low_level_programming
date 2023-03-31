#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string
 * @src: 2nd string
 * @n: number of caracter to copy
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*src && i < n)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
