#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if there is one or more
 *         chars in the string b that is not 0 or 1 or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int decimal = 0, base = 1;
    int len, i;

    if (b == NULL)
        return (0);

    for (len = 0; b[len];)
    {
        if (b[len] == '0' || b[len] == '1')
            len++;
        else
            return (0);
    }

    for (i = len - 1; i >= 0; i--)
    {
        if (b[i] == '1')
            decimal += base;
        base *= 2;
    }

    return (decimal);
}
