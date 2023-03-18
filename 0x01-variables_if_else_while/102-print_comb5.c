#include <stdio.h>
/**
 * main - a program that prints all possible combinations of tow tow-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int i, j, k, q;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (q = 1; q < 10; q++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(q + '0');
					if (j != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

