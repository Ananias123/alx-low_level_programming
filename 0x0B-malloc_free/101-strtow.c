#include "main.h"
#include <stdlib.h>
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len -the function that locate the index of the first word
 * @str: the sring to check
 * Return: the index marking the end
 */
int word_len(char *str)
{
	int x = 0, leng = 0;

	while (*(str + x) && *(str + x) != ' ')
	{
		leng++;
		x++;
	}

	return (leng);
}

/**
 * count_words - the function that counts the number of words in a string
 * @str: the string whose words are counted
 * Return: The number of words in a string
 */
int count_words(char *str)
{
	int x = 0, Number = 0, leng = 0;

	for (x = 0; *(str + x); x++)
		leng++;
	for (x = 0; x < leng; x++)
	{
		if (*(str + x) != ' ')
		{
			Number++;
			x += word_len(str + x);
		}
	}

	return (Number);
}

/**
 * strtow - the function that splits a string into words
 * @str: the string to be scattered
 * Return: if str = NuLL, str = ''
 */

char **strtow(char *str)
{
	char **strs;
	int x = 0, Number, y, letter, k;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	Number = count_words(str);
	if (Number == 0)
		return (NULL);
	strs = malloc(sizeof(char *) * (Number + 1));
	if (strs == NULL)
		return (NULL);

	for (y = 0; y < Number; y++)
	{
		while (str[x] == ' ')
			x++;
		letter = word_len(str + x);

		strs[y] = malloc(sizeof(char) * (letter + 1));

		if (strs[y] == NULL)
		{
			for (; y >= 0; y--)
				free(strs[y]);
			free(strs);
			return (NULL);
		}

		for (k = 0; k < letter; k++)
			strs[y][k] = str[x++];
		strs[y][k] = '\0';
	}
	strs[y] = NULL;

	return (strs);
}
