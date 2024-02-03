#include <stdio.h>
#include "main.h"
/*
 * jack_bauer - function that prints every minute of every hour of the day     
 *
 * return: 0
 */
void jack_bauer(void)
{
int x, y;

	for (x = 0; x <= 23; x++)
		{
		for (y = 0; y <= 59; y++)
			{
			putchar(x / 10 + '0');
			putchar(x % + '0');
			putchar(':');
			putchar(y / 10 + '0');
			putchar(y % 10 +'0');
			putchar('\n');
			}
		}
}

