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
	int c;

	c = 0;
	while (c < 15)
	{
		putchar("%x", c);
		c++;
	}
	
	putchar('\n');
	return (0);
}
