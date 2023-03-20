#include <stdio.h>
#include <unistd.h>
/**
 * main - prints un error to the stdout
 * Return: 1 (success)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, sizeof(msg) - 1);
	return (1);
}
