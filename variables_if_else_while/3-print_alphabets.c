#include <stdio.h>
#include <stdlib.h>

/**
 * main - This prints alphabet in lowercase and then uppercase
 *
 * Return: (0)
 *
 **/
int main(void)
{
int i = 'a';
int j = 'A';

while (i <= 'z')
{
	putchar (i);
	i++;
}
while (j <= 'Z')
{
	putchar (j);
	j++;
}
putchar('\n');

return (0);
}
