#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 when success
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char)\n);
	printf("Size of int: %lu byte(s)", sizeof(int)\n);
	printf("Size of a long int: %lu byte(s)", sizeof(long int)\n);
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int)\n);
	printf("Size of a float: %lu byte(s)", sizeof(float)\n);
	return (0);
}
