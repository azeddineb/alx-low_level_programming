#include <stdio.h>
/**
 * main - this is a fct that prints alphabets exept e and q
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}

