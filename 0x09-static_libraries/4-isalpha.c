#include "main.h"

/**
 * _isalpha - that is a program that verify the alphabet
 * @c: the char to be verified
 *
 * Return: if c is a leeter, return 1, else return 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
