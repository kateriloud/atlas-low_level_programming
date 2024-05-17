#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - void
 *
 * Description: prints alphabet in lowercase using putchar only
 *
 * @: no parameters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';
	while ( alpha <= 'z' )
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
