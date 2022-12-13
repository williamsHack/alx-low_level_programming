#include "main.h."

/**
 *_islower - tells if a data is lower or not
 * he value
 * Return: returun status code
 */

int _islower(int c)
{
int value;
if (islower(c))
{
value = 1;
}
else
{
value = 0;
}
return (value);
}
