#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - void
 *
 * Description: prints all lowercase letters in hexidecimal form
 *
 * @: no parameters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;

	for (x = 48; x <= 57; x++)
	{
		putchar('0' + x);
	}
	for (y = 97; y <= 102; y++)
	{
		putchar('0' + y);
	}
	
	putchar('\n');
	return (0);
}
