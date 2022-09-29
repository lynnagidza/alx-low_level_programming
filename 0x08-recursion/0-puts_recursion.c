#include "main.h"

/**
 * File: 0-puts_recursion.c
 * Auth: Lynn Ekalaji
 * Desc: A function that prints a string, followed by a new line.
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
