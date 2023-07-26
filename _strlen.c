#include "main.h"

/**
 * _strlen - return the lenght of the string
 * @str: the string
 * Return: the lenght
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _print - print char
 * @str: string
 * Return: length of the string
 */

int _print(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
