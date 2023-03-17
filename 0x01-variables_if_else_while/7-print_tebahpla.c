#include <stdio.h>
/**
 * main - that program print aplphabets in reverse
 * Return: 0 (susccess)
 */
int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}

