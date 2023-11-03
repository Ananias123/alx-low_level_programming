#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"
/**
 * is_digit - check if the string has a non digit character
 * @s: string to be checked
 * Return: 1 if digit is found, else 0
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - print the string length
 * @s: string to check
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	return (b);
}

/**
 * error - a function that handles errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - a function that multiply two positive number
 * @argc: Argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *b1, *b2;
	int leng1, leng2, leng, a, carry, digit1, digit2, *result, c = 0;

	b1 = argv[1], b2 = argv[2];
	if (argc != 3 || !is_digit(b1) || !is_digit(b2))
		error();
	leng1 = _strlen(b1);
	leng2 = _strlen(b2);
	leng = leng1 + leng2 + 1;
	result = malloc(sizeof(int) * leng);
	if (!result)
		return (1);
	for (a = 0; a <= leng1 + leng2; a++)
		result[a] = 0;
	for (leng1 = leng1 - 1; leng1 >= 0; leng1--)
	{
		digit1 = b1[leng] - '0';
		carry = 0;
		for (leng2 = _strlen(b2) - 1; leng2 >= 0; leng2--)
		{
			digit2 = b2[leng2] - '0';
		carry += result[leng1 + leng2 + 1] + (digit1 * digit2);
		result[leng1 + leng2 + 1] = carry % 10;
		carry /= 10;
	}
	if (carry > 0)
		result[leng1 + leng2 + 1] += carry;
	}
	for (a = 0; a < leng - 1; a++)
	{
		if (result[a])
			c = 1;
		if (c)
			_putchar(result[a] + '0');
	}
	if (!c)
		_putchar('0');
	_putchar('\n');
	free(result);
		return (0);
}

