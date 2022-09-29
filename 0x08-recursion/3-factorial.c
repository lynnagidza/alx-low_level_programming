#include "main.h"

/**
 * File: 3-factorial.c
 * Auth: Lynn Ekalaji
 * Desc: A function that returns the factorial of a given number.
 */
 
 int factorial(int n)
{
if (n < 0)
return (-1);

else if (n == 0)
return (1);

return (n * factorial(n - 1));
}
