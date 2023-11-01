#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - The function returns the square root
 * @n: the number to be squared
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recursive function to find natural sqrt
 * @n: the number to find the square root
 * @i: the itelator
 *
 * Return: the natural sqrt
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

