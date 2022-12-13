void print_message(void);
void print_alphabet(void);
#include <stdio.h>

void print_message(void)
{
printf("_putchar\n");
}

void print_alphabet(void)
{
char letter;
for(letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}
