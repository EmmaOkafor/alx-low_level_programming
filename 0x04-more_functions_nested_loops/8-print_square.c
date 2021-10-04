#include "main.h"

/**
 * print_square - print square using '#' symbol
 * @size: size of the square
 * @row: width of the square
 * @column: height of square
 *
 */

void print_square(int size)
{
if (size >= 0)
{
int row, column;
for (row = 1; row <= size; row++)
{
    for (column = 1; column <= size; column++)
    {
        _putchar('#');

    }
    _putchar('\n');

}
}
else

_putchar('\n');


}