#include "main.h"

/**
 * _atoi -  function that change a string into an integer.
 * @s: The string used.
 *
 * Return: Int
 */

int _atoi(char *s)
{
	int sig = 1, a = 0;
	unsigned int unsig = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-'
			
			sig *= -1;
		a++
	}
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{

		unsig = (unsig * 10) + (s[a] - '0');
		a++
	}
	unsig *= sig;
	return (unsig);
}
