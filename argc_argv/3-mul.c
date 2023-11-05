#include <stdio.h>
#include <stdlib.h>
/**
 * main -  print the result of the multiplication.
* @argc: arguments count
* @argv: argument vector
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	if (argc == 3)
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
