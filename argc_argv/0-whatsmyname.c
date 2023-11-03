#include <stdio.h>

/**
 * main -  prints its name.
* @argv: command to print its name of a string.
* @argc: command not used.
* Return: its name
*/

int main(__attribute__((unused))int argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
