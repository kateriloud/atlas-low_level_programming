#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower - entry point
 * Description: program that checks for lowercase character
 * @c: int
 * Return: Always 0 (Success)
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
