#include "main.h"

/**
 * printOctal - print a unsigned octal
 * @list: number to print
 * Return: length of the number
 */

int printOctal(va_list list)
{
	char *octalStr;
	int size;

	octalStr = _itoa(va_arg(list, unsigned int), 8);

	size = _print((octalStr != NULL) ?  octalStr : "NULL");

	return (size);
}
