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
		for (k = '0'; k <= '9'; k++)
		{
			putchar(k);

		if (k < 9)	
			{
			putchar(' ');
			putchar(',');
			}
		
		}
	putchar('\n');
	return (0);
}
