#include "main.h"

/**
  step one
 * get_bit -  to return the value of a bit at an index in a decimal numbers
 * @n: number to search
 * @index: index of the bit
 *step two
 * Return:  you should return value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
