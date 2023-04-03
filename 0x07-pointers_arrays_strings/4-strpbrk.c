#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to search in
 * @accept: the bytes to be searched for
 *
 * Return: a pointer to the byte in @s that matches one of the bytes in @accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                /* Found a match, so return a pointer to this byte in s */
                return (s + i);
            }
        }
    }

    /* No match found, so return NULL */
    return (NULL);
}

