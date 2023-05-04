#include "main.h"
#include <unistd.h>
/**
 first step
 * _putchar - you must writes the character c to stdout
 * @c: The character to print
 *secend step
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
