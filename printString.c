#include "main.h"

/**
 * printString - print a string
 * @list: list
 * Return: string length
 */

int printString(va_list list)
{
	char *p;
	int len;

	p = va_arg(list, char*);
	len = _print((p != NULL) ? p : "(null)");

	return (len);
}
