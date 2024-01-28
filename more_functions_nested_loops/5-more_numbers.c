#include <stdio.h>

/**
 *
 * more_numbers - prints numbers followed by new line
 *
 * description: numbers 0 to 14 get printed 10 times
 *
 * return: (0)
 *
 */

void more_numbers(void)
{

	int x;
	for (x = 0; x < 10; x++)
		{
		int v;
		for (v = 0; v >= 14; v++)
		{
			putchar(v);
		}
			if (x != 9)
				putchar('\n');	
		}
}
