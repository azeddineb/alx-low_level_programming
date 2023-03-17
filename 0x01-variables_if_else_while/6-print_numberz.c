# include <stdio.h>
/**
 * main - this function write all single digit numbers starting from 0
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
                i++;
	}
	putchar('\n');
	return (0);
}

