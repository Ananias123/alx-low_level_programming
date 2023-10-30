#include "main.h"

/**
 * _isupper - Verify if the letter is uppercase
 * @c: character to verify
 *
 * Return: For the uppercase condition met, return 1, otherwise return 0
 */

int _isupper(char c)
{
	if (c <= 'A' && c <= 'Z')

		return (1);


	return (0);

}
