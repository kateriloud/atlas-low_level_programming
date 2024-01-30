#include "main.h"
#include <stdlib.h>

/**
 * print numbers 1 to 100
 * description: multiples of 3 print Fizz, multiples of 5 print Buzz, for multiples of both 3 and 5 print word FizzBuzz, print number otherwise and each print followed by space
 * return: (0)
 *
 */
int main(void)

int x;
for (x = 1; x <= 100; x++)
{
	if ((x % )3 == 0 && (x % 5) == 0)
		{
		putchar("FizzBuzz");
		putchar(" ");
		}
	else if (x % 3 == 0)
		{
		putchar("Fizz");
		putchar(" ");
		}
	else if (x % 5 == 0)
		{
		putchar("Buzz");
		putchar(" ");
		}
	else
		{
		putchar(x);
		putchar(" ");
		}
}

