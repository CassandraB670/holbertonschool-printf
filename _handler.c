#include "main.h"

/**
 * _handler - format controller
 * @str: string format
 * @list: list of arguments
 *
 * Return: total size of arguments with the total size of the base string
 **/
int _handler(const char *str, va_list list)
{
	int size, i, formattedSize;

	size = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			formattedSize = percentHandler(str, list, &i);
			if (formattedSize == -1)
				return (-1);

			size += formattedSize;
			continue;
		}

		_putchar(str[i]);
		size = size + 1;
	}


	return (size);
}

/**
 * percentHandler - controler for percent format
 * @str: string format
 * @list: list of arguments
 * @i: iterator
 *
 * Return: Size of the numbers of elements printed
 **/
int percentHandler(const char *str, va_list list, int *i)
{
	int size, j, numberFormats;
	format formats[] = {
		{'s', printString}, {'c', printChar},
		{'d', printDecimal}, {'i', printInteger},
		{'b', printBinary}, {'u', printUnsigned},
		{'o', printOctal}
	};

	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}
	numberFormats = sizeof(formats) / sizeof(formats[0]);
	for (size = j = 0; j < numberFormats; j++)
	{
		if (str[*i] == formats[j].type)
		{
			size = formats[j].f(list);
			return (size);
		}

	}

	_putchar('%'), _putchar(str[*i]);

	return (2);
}
