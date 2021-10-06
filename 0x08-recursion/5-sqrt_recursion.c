#include "main.h"
int sqrt_root(int n, int squared);
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number to calculate the square root of
 * Return: the reulting square root
 * Description - A function that returns the
 * natural square root of a number
 */


int _sqrt_recursion(int n)
{
int squared = 0;
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (sqrt_root(n, squared));
}

/**
 * sqrt_root - returns the square root of a number
 * @n: number to calculate the square root of
 * @squared: the actual square root
 * Return: the reulting square root
 * Description - A function that returns the
 * natural square root of a number
 */

int sqrt_root(int n, int squared)
{
if (squared * squared > n)
return (-1);
else if (squared * squared == n)
return (squared);
else
return (sqrt_root(n, squared + 1));
}
