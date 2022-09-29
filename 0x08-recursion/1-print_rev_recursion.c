#include "main.h"

/**
 * File: 1-print_rev_recursion.c
 * Auth: Lynn Ekalaji
 * Desc: A function that prints a string in reverse.
 */
 
 void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
