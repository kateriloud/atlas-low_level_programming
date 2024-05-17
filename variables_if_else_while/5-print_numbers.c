#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - void
 *
 * Description: prints all single digit numbers 0-9
 *
 * @: no parameters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	while (x <= 9)
	{
	putchar(x);
	x++;
	}
	putchar('\n');	
	return (0);
}
