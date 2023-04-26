#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1;
    int len = 0;

    while (mask <= n)
    {
        len++;
        mask <<= 1;
    }

    if (len > 0)
        mask >>= 1;

    while (mask > 0)
    {
        if (n & mask)
            _putchar('1');
        else
            _putchar('0');

        mask >>= 1;
    }
}
