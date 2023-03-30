#include "main.h"
#include <limits.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: The int converted from the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
	}
	if (s[i] == '+')
	{
		i++;
	} else if (s[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
		{
			return (sign == 1 ? INT_MAX : INT_MAX);
		}

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}

