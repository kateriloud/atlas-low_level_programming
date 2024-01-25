#include <stdio.h>
#include <stdlib.h>
/*
 * main - prints a line of numbers 1 to 9 followed by a new line
 *
 * Return: (0)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
