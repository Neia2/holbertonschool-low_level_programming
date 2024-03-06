#include <stdio.h>

/**
 * main -  prints the number of arguments
* @argc: command the number of arguments
* @argv: command not used.
* Return: its name
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
