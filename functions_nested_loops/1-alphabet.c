#include "main.h"
#include <stdio.h>
/**
 * main - alphabet lowercase
 *
 * Return: (0) always
 * */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
