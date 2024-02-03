#include <stdio.h>
#include "main.h"
/*
 * jack_bauer - function that prints every minute of the day
 *
 * return: 0
 */
void jack_bauer(void)
{
int x;
int y;

{

	for (x = 0; x < 23; x++)
	{
		putchar(x / 10 + '0');
		putchar(x % + '0');
		putchar(':');
		putchar('\n');
	}
	for (y = 0; y < 59; y++)
	{
		putchar(y / 10 + '0');
		putchar(y % 10 + '0');
		putchar(':');
		putchar('\n');
	}
return: (void);
}
