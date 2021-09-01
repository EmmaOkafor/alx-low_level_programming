#include "main.h"

/**
 *print_alphabet - prints the alphabet, in lowercase, followed by a new line 
 */

void print_alphabet(void)
{
  char b = 'a';
   while (b <= 'z')
     {
       _putchar(b);
       b++;
     }
   _putchar('\n');
}
