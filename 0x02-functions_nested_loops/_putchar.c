#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character to the stdout
 * @c: the character to print
 * Return: 1 if success
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

