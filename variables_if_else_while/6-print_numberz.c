#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - void
 *
 * Description: prints all single digit numbers 0-9 with putchar
 *
 * @: no parameters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 0;

	while (ch < 10)
	{
		putchar('0' + ch);
		ch++;
	}
		putchar('\n');
		return (0);

}
