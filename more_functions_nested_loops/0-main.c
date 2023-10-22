#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	for (c = 'A'; c <= 'Z'; ++c)
		printf("%c: %d\n", c, isupper(c));
	return (0);
}
