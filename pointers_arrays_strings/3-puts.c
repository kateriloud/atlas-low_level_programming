#include <stdio.h>
#include "main.h"
/**
 * _puts - print a string followed by new line to stdout
 * @str: character
 *
 * return: (0)
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
		putchar('\n');
}
