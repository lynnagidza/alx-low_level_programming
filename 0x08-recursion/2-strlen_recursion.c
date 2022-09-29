#include "main.h"

/**
 * File: 2-strlen_recursion.c
 * Auth: Lynn Ekalaji
 * Desc: A function that  returns the length of a string.
 */

int _strlen_recursion(char *s)
{
if (*s != '\0')
return (1 + _strlen_recursion(s + 1));

return (0);
}
