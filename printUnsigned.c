#include "main.h"

/**
 * printUnsigned - print a unsigned int
 * @list: numbers to print
 * Return: mength of number
 */

int printUnsigned(va_list list)
{
	char *unsignedStr;
	int size;

	unsignedStr = _itoa(va_arg(list, unsigned int), 10);

        size = _print((unsignedStr != NULL) ? unsignedStr : "NULL");

        return (size);
}
