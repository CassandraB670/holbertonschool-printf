#include "main.h"

/**
 * handler - format controler
 * @str: string format
 * @list: list of argument
 * Return: total size of arguments with the total of the base string
 */

int _handler(const char *str, va_list list)
{
	int size, i, aux;

	size = 0;

	for (i = 0; str[i] != 0; i++)
	{

		if (str[i] == '%')
		{
			aux = percentHandler(str, list, &i);
			if (aux == -1)
				return(-1);
			size += aux;
			continue;
		}

		_putchar(str[i]);
		size = size + 1;
	}
	return(size);
}

/**
 * percent_handler - controler for percent format
 * @str: string format
 * @list: list of argument
 * @i: iterator
 * Return: size of the numbers of element printed
 */

int percentHandler(const char *str, va_list list, int *i)
{
	int size, j, number_formats;

	format formats[] = {
		{'s', printString}, {'c', printChar},
	};

	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	number_formats = sizeof(formats) / sizeof(formats[0]);
	for (size = j = 0; j < number_formats; j++)
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
