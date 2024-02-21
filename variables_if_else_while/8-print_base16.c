#include <stdio.h>

/*
*main: prints all the numbers of base 16 in lowercase 
Return: Always 0
*/
int main(void)
{
int i, j;

for(i= '0'; i<= '9'; i++)
    {
    putchar(i);
    }{
for( j='a'; j <= 'f'; j++)
    putchar(j);
    }
return (0);
}
