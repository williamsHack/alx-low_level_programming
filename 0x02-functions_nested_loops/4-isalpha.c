#include <ctype.h>
#include <stdio.h>

/**
 *_isalpha - thels if it is alphabetic
 * Return - retuarn vbalue
 */
int _isalpha(int c)
{
  int value;

  if (isalpha(c))
    {
      value = 1;
    }
  else
    {
      value = 0;
    }
  return (value);
}

void _putchar(int n)
{
  printf(n);
}
