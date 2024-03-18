#include <stdio.h>
{
   printf("Hello, my name is %s\n", name);
}
int main()
{
   void(*f)(char*);
   f = print_name;
   f("Bob");
}
