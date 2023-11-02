#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longer = 0;
	int u = 0;
	char *x = str;
	int a;

	while (*x != '\0')
	{
		x++;
		longer++;
	}
	u = longer - 1;
	for (a = 0 ; a <= u; a++)
	{
		if (a % 2 == 0)
	{
		_putchar(str[a]);
	}
	}
	_putchar('\n');
}


