#include <stdio.h>

/**
 * print_most_numbers - function that prints numbers followed by a new line
 * description - prints numbers 0 to 9 except  2 and 4
 *
 * return (0)
 *
 */
void print_most_numbers(void)
{

	int k;
	for (k = 48; k < 58; k++)
	{
		if (k != 50 && k != 52)
		{
		_putchar(k)
		}
	}
	putchar('\n');
}
