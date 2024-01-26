#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible cominations of single digit numbers
 *
 *  Return: (0)
 *
 */

int main(void)

{
	int k;

	for (k = 48; k < 58; k++)
	{
		putchar(k);
		if (k < 57)

		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);

}
