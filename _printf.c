#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: is a character string, the format string
 * is composed of zero or more directives
 * Return: the numbers of characters printed (excluding
 * the null bytes used to end output to strings)
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
