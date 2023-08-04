#include "main.h"

/**
 * printBinary - print a number in base 2
 * @list: number to print in base 2
 * Return: length of the numbers in binary
 */

int printBinary(va_list list)
{
	char *binaryStr;
	int size;

	binaryStr = _itoa(va_arg(list, unsigned int), 2);

	size = _print(binaryStr);

	return (size);
}
