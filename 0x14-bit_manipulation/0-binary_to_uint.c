#include "main.h"

/**
 first step
 * binary_to_uint - converts a binary numbers to unsigne int
 * @b: string contain the binary numbers
 *secend step
 * Return: the convert numbers
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[k] - '0');
	}

	return (dec_val);
}
