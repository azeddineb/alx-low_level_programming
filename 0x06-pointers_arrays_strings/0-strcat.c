#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: stirng
 * @src: the string to concatenate
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (dest_end != '\0')
	{
		dest_end++;
	}

	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}

	*dest_end = '\0';
	return (dest_end);
}

