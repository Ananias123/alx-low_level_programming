#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 else nothing
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list Numbers;
	unsigned int a, sum = 0;

	va_start(Numbers, n);
	for (a = 0; a < n; a++)
		sum += va_arg(Numbers, int);

	va_end(Numbers);
	return (sum);
}
