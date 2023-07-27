#include "main.h"

/**
 * printDecimal - function that print a decimal
 *
 * @list: list
 *
 * Return: count
 */

int printDecimal(va_list list)
{
	int number = va_arg(list, int);
	int copyofnumber;
	int lastdigit = number % 10;
	int digit;
	int count = 1;
	int multiplicator = 1;

	number = number / 10;
	copyofnumber = number;

	if (lastdigit < 0)
	{
		_putchar('-');
		copyofnumber = -copyofnumber;
		number = -number;
		lastdigit = -lastdigit;
		count++;
	}
	if (copyofnumber > 0)
	{
		while (copyofnumber / 10 != 0)
		{
			multiplicator = multiplicator * 10;
			copyofnumber = copyofnumber / 10;
		}
		copyofnumber = number;
		while (multiplicator > 0)
		{
			digit = copyofnumber / multiplicator;
			_putchar(digit + '0');
			copyofnumber = copyofnumber - (digit * multiplicator);
			multiplicator = multiplicator / 10;
			count++;
		}
	}
	_putchar(lastdigit + '0');
	return (count);
}

