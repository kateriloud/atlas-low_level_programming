#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 * Description: prints all single digits with , and space following
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 0;

	while (ch < 10)
	{
		putchar('0' + ch);
		putchar(',');
		putchar(' ');
	}
	ch++;

	putchar('\n');
	return (0);
}
