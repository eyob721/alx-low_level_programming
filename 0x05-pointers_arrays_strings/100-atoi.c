#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: a string
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	unsigned int i, j, k, sign = 1, num = 0, power = 1;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] > 47 && s[i] < 58)
			break;
	if (s[i] == '\0')
		return (num);
	for (j = i; s[j] > 47 && s[j] < 58; j++)
		;
	j--;
	for (k = 0; k < j - i; k++)
		power *= 10;
	for (k = i; k < j + 1; k++)
	{
		num += (s[k] - '0') * power;
		power /= 10;
	}
	return (num * sign);
}
