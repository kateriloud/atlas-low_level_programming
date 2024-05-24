#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <math.h>

/**
 * swap_int - entry point
 * Description: function that swaps two integers using pointers
 * @a: int
 * @b: int
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}
