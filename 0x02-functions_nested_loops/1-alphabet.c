#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - print the alphabet
 */

void print_alphabet(void);
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

putchar('\n');
}
