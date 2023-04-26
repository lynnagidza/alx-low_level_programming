/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long integer
 * @index: unsigned integer
 *
 * Return: value of bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
    unsigned long int mask;

    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);

    mask = 1 << index;

    return ((n & mask) != 0);
}
