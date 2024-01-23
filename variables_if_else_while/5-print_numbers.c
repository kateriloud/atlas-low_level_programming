#include <stdio.h>
#include <stdlib.h>
/*
 * main - Prints single digit numbers of base 10 starting with 0
 *
 * Return - (0)
 */
int main(void)
{
	int n;

	for (n = '0';  n <= '9'; n++);
		{
		putchar(n);
		putchar('\n');
		}
	return (0);
}
