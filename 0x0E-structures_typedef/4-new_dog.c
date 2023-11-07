#include <stdlib.h>
#include "dog.h"


/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}


/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int leng, x;

	leng = 0;

	while (src[leng] != '\0')
	{
		leng++;
	}
	for (x = 0; x < leng; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
/**
 * * new_dog - creates a new dog name
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: Owner of the dog
 *
 * Return: The pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int leng1;
	int leng2;

	leng1 = _strlen(name);
	leng2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (leng1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (leng2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
