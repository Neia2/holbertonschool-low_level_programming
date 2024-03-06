#include <stdio.h>

/**
 * main -  prints the number of arguments
* @argc: command the number of arguments
* @argv: command not used.
* Return: its name
*/

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
