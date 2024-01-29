#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int lendest = 0;
	int lensrc = 0;
	int x;

	for (x = 0; dest[x] != '\0'; x++)
		lendest++;
	for (x = 0; src[x] != '\0'; x++)
		lensrc++;
	for (x = 0; x <= lensrc; x++)
		dest[lendest + x] = src[x];
	return (dest);
}
