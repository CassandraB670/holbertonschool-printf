#include "main.h"

/**
 * _strlen - return the lenght of the string
 * @s: the string
 * Return: the lenght
 */

int _strlen(const char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		s++;
		lenght++;
	}
	return (lenght);
}

/**
 * print - print char
 * @str: string
 * Return: length of the string
 */

int _print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

