#include <stdio.h>
#include <stdlib.h>
/**
 * main: adds positive numbers passed as command line arguments.
 *
 * @argc: The number of command line arguments.
 * @argv: An array of strings representing the command line arguments.
 * @return: 0 if successful, 1 if there is an error.
 */
int main(int argc, char* argv[])
{
	int sum = 0;
	int i, j;


	if (argc == 1)	
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{	
		for (j = 0; argv[i][j] != '\0'; j++)
		{ 
			if (argv[i][j] < '0' || argv[i][j] > '9')
		
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
