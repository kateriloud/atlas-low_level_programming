#include <stdio.h>

/**
 * main - This prints alphabet in lowercase and then uppercase
 *
 * Return: (0)
 *
 **/
int main(void)
{
        int i = 'a'
	int j = 'A'

	while ( i <= 'z')
	{
		putchar (i);
		i++;
	}
	while ( j  <= 'z')
	{
		putchar (i);
		i++;
	}

        putchar('\n');
        return (0);
}
