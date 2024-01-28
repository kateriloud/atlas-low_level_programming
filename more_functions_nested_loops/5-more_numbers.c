#include <stdio.h>

/**
 * more_numbers - prints numbers followed by new line
 *
 * description: numbers 0 to 14 get printed 10 times
 *
 * return: (0)
 *
 */

void more_numbers(void)
	{

	int a, b;

	for (a = 0; a < 10; a++)

		{
		for (b = 0; b <= 14; b++)

			{
			if (b >= 10)

				{
				putchar((b / 10) + '0');
				}

			putchar((b % 10) + '0');
			}

	putchar('\n');
		}
	}
