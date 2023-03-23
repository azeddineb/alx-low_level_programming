#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers from n to 98
 * @n: the number to print from
 */
void print_to_98(int n)
{
	int i;

	printf("%d", n);
	if (n < 98)
	{
		for (i = n + 1; i <= 98; i++)
		{
			printf(", %d", i);
		}
	}
	else if (n > 98)
	{
		for (i = n - 1; i >= 98; i--)
		{
			printf(", %d", i);
		}
	}
	printf("\n");
}
