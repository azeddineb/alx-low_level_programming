#include <stdio.h>
/**
 * main -program that prints all possible combinations of tow tow-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int i, j, k, l;
	int unique;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			k = i;
			while (k < 10)
			{
				l = (k == i) ? j + 1 : 0;
				while (l < 10)
				{
					/* assume combination is unique */
					unique = 1;
					/* check if digits repeat */
					if (i == k && j == l)
					{
						unique = 0;
					}
					if (unique && i == l && j == k)
					{
						unique = 0;
					}
					if (unique)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
						if (i != 9 || j != 8 || k != 9 || l != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
					l++;
				}
				k++;
			}
		}
	}
	putchar('\n');
	return (0);
}

