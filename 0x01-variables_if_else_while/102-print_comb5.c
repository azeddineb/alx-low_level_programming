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
		for (j = 0; j < 10; j++)
		{
			k = i;
			while (k < 10)
			{
				q = (k == i) ? j+1 : 0; /*start from j+1 only for the first value of k*/
				while (q < 10)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(q + '0');
					if (i != 9 || j != 9 || k != 9 || q != 9)
					{
						putchar(',');
						putchar(' ');
					}
					q++;
				}
				k++;
			}
		}
	}
	putchar('\n');
	return (0);
}
