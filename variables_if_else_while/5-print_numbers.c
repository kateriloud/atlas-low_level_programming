#include <stdio.h>
#include <stdlib.h>
/*
 * main Entry point
 *
 * Description: prints a line of numbers using the printf function.
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
