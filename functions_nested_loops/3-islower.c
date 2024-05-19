#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * main - entry point
 * Description: program that checks for lowercase character
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	int c;

	if (islower(c) !=0)
	{
		_putchar('1');
	}
	return 0;
}
