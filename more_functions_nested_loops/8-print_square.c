#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square
 * @size: size reference
 * return: (0)
 *
 */
void print_square(int size)

{
int x, y;
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			putchar('#');
		}
			putchar('\n');
	}
		if (x <= 0)
		putchar('\n');
}
