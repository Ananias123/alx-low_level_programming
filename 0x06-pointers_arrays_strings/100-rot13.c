#include "main.h"
#include <stdio.h>

/**
 * rot13 - A function that encodes rot13
 * @s: pointer to string parameter
 * Return: *s
 */

char *rot13(char *s)
{
	int a;
	int b;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == data[b])
			{
				s[a] = datarot[b];
				break;
			}
		}
	}
	return (s);
}

