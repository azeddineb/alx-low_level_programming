#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: parameter to swap
 * @b: parameter to swap
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
