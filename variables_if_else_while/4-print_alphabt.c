#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - void
 *
 * Description: prints lowercase letters except q and e with putchar
 *
 * @: no parameters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        char alpha = 'a';
        while (alpha <= 'z' && alpha != 'e' && alpha != 'q')
        {
                putchar(alpha);
                alpha++;
        }
        putchar('\n');
        return (0);
} 
