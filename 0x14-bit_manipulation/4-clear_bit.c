#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index
 * @n: parameter to check
 * @index: Index where the number is found
 *
 * Return: 1 for success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
