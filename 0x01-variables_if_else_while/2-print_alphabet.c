#include <stdio.h>
/**
 * main - program prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
