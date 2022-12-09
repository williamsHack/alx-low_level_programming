#include <stdio.h>

/**
*main - return single integer from 0-10
*
*Return: Always 0 (Sucess)
*/
int main(void)
{
int num = 0;

for (; num < 10; num++)
{
putchar("%c", (char) num);
}
putchar('\n');
return (0);
}
