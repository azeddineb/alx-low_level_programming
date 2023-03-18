#include <stdio.h>
/**
 * main - a program that prints all possible combinations of tow tow-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
    int i, j, k, l;

    for (i = 0; i <= 9; i++) {
        for (j = i; j <= 9; j++) {
            for (k = 0; k <= 9; k++) {
                for (l = k; l <= 9; l++) {
                    if (i*10 + j <= k*10 + l) {
                        putchar(i + '0');
                        putchar(j + '0');
                        putchar(' ');
                        putchar(k + '0');
                        putchar(l + '0');
                        if (i != 9 || j != 9 || k != 9 || l != 9) {
                            putchar(',');
                            putchar(' ');
                        }
                    }
                }
            }
        }
    }

    putchar('\n');

    return 0;
}

