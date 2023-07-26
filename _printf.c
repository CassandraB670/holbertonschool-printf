#include "main.h"

/**
 * _printf - function that print output accordind to the format
 *
 * @format: is a character string, the format string
 * is composed of 0 or more directive
 *
 * Return: the number of character printed (excluding
 * the null bytes used to end output to string
 */

int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(args, format);
	size = _handler(format, args);

	va_end(args);

	return (size);
}
