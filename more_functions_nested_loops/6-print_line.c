#include <stdio.h>

/**
 * print_line - prints characters
 * description: prints a straight line in place of numbers 
 *
 * return: always (0)
 *
 */
void print_line(int k)
{
	for(k = 0; k >= 9; k++)
	{
		if(k == 48)
		{
			putchar('\n');
		}
		if(k == 49 && k < 58)
		{
			putchar('_');
		}
	}
}
