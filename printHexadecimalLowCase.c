#include "main.h"

/**
 * printHexadecimalLowercase - print a number in hexadecimal format
 * @list: number to print
 * Return: length of the number
 */

int printHexaLower(va_list list)
{
	char *hexaLower;
	int size;

	hexaLower = _itoa(va_arg(list, unsigned int), 16);

	size = _print((hexaLower != NULL) ? hexaLower : "NULL");

	return (size);
}
