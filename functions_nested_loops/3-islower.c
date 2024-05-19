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

	if (c >= 'a' && c<= 'z')
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}

	return 0;
}
