#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The argument string to be reversed.
 */
void rev_string(char *s)
{
int j = 0, i = 0;
char z;

while (s[i++])
j++;

for (i = j - 1; i >= j / 2; i--)
{
z = s[i];
s[i] = s[j - i - 1];
s[j - i - 1] = z;
}
}
