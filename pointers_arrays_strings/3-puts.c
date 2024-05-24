#include <stdio.h>
#include "main.h"

/**
 * _puts - entry point
 * Description: prints string without using puts
 * @str: char
 * Return: Always 0 (success)
 */

void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return;
}
