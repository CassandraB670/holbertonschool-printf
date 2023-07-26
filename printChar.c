#include "main.h"

/**
 * printChar - print a character
 * @list: list
 * Return: 1
 */

int printChar(va_list list)
{
	int i;

	i = va_arg(list, int);

	_putchar(i);

	return (1);
}
