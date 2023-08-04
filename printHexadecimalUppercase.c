#include "main.h"

int _isLower(char);
char *stringToUpper(char *);

/**
 * printHexaUpper - print a number in hexadecimale format
 * @list: list
 * Return: lengthof the number
 */

int printHexaUpper(va_list list)
{
	char *hexaUpper;
	int size;

	hexaUpper = _itoa(va_arg(list, unsigned int), 16);
	hexaUpper = stringToUpper(hexaUpper);

	size = _print ((hexaUpper != NULL) ? hexaUpper : "NULL");

	return (size);
}

/**
 * isLower - check if the character are in lowercase
 * @c: character
 * Return: 1 if lower otherwise 0
 */

int _isLower(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * stringToUpper
 * @s: the string
 * Return: string to uppercase
 */

char *stringToUpper(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (_isLower(s[index]))
		{
			s[index] = s[index] - 32;
		}
	}
	return (s);
}
