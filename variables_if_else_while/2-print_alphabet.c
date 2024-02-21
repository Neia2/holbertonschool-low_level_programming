#include <stdio.h>

/*
 * main - Entry point
 * Return: Always 0
*/
int main (void)
{
char alphabet;

for(alphabet= 97; alphabet <= 122; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
