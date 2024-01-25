#include <stdio.h>
#include <stdlib.h>
/*
 * main: printf single digit numbers followed by a new line
 *
 * Description: prints a line of single digits 1 through 9
 * @n: sdfgdsr
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
