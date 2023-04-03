#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: the string to search in
 * @needle: the substring to be located
 *
 * Return: a pointer to the beginning of the located
 * substring in @haystack,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && haystack[i + j]; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}

		if (!needle[j])
			return (haystack + i);
	}

	return (NULL);
}

