#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (_buffer(c));
}

/**
 * _buffer - save the caracter in a buffer
 * @c: character
 * Return: 1
 */

int _buffer(char c)
{
	static char buffer[1024];
	static int index;

	{
		write(1, buffer, index);
		index = 0;
	}

	if (c != -1)
		buffer[index++] = c;

	return (1);
}
