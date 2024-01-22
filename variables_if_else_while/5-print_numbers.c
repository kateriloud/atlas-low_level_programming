#include <stdio.h>
#include <stdlib.h>
/*
 * main - Prints single digit numbers of base 10 starting with 0
 *
 * Return - (0)
 */
int main(void)
{
char x = 'a';

while ( x <= 'z') {
	if (x != 'q' && x != 'e') {
		putchar(x);
	}
	x++;
}

putchar('\n');

return (0);
}
