#include <stdio.h>

/**
 * Main - entry point
 *
 * Description: program that prints sizeof various data types
 *
 * @: no parameters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
	printf("Size of an float: %lu byte(s)\n", sizeof(float));

	return (0);
}