#include "main.h"

/**
 * print_line - prints the character "_" n timesto draw a line
 * @n: number of character to draw
 * 
 */

void print_line(int n)
{
int times = n;

for (times = n; times > 0; times --)
_putchar('_');
_putchar('\n');

}