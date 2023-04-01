#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse
 * @n: number of elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int tmp = a[i];

		a[i] = a[j];
		a[j] = tmp;
	}
}

