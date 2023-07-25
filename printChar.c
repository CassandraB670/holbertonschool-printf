#include "main.h"

/**
 * print_char - print a character
 * @list: list
 * Return: 1
 */

int printChar(va_list list)
{
	int aux;

	aux = va_arg(list, int);

	_putchar(aux);

	return (1);
}
