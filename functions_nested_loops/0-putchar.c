#include <main_h>

/**
 *
 * main - 
 *
 * Description: program that prints _putchar with new line 
 *
 * @: no parameters
 *
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
}
