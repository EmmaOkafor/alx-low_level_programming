#include "main.h"
/**
 *void print_alphabet_x10 - prints 10 times the alphabet, 
 *in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
int i = 0;

while (i < 10)
{
char b = 'a';

while (b <= 'z')
	{
	  _putchar(b);
	  b++;
	}
_putchar('\n');
i++;
}
}
