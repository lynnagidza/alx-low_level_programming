#include "main.h"

/**
 * File: 6-is_prime_number.c
 * Auth: Lynn Ekalaji
 * Desc: A function that returns 1 if the input integer is a prime number, otherwise returns 0.
 */
 
int primeFinder(int a, int b)
{
if (a <= 1 || a % b == 0)
return (0);
else if (a == b)
return (1);
else if (a > b)
primeFinder(a, b + 1);

return (1);
}

int is_prime_number(int n)
{
return (primeFinder(n, 2));
}
