#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0 (no errors)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
		for (b = 0; b < 10; b++)
			for (c = 0; c < 10; c++)
			{
				if (a < b && b < c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (!(a == 7 && b == 8 && c == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	putchar('\n');

	return (0);
}

