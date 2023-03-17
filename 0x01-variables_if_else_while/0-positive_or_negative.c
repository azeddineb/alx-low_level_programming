#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - print whether the number is positive or negative
 * Return: 0 (means success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n");
	}
	else
	{
		if (n < 0)
		{
			printf("%d is negative\n");
		}
		else
		{
			printf("%d is zero\n");
		}
	}
	return (0);
}
