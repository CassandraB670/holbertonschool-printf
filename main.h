#ifndef MAIN_H_
#define MAIN_H_

/****** libraries ******/

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/* printf.c */

int _printf(const char *format, ...);

/* tools */
int _strlen(const char *s);
int _print(char *);
char *_itoa(long int, int);
/* handler.c */
int _handler(const char *str, va_list);
int percentHandler(const char *str, va_list list, int *i);

/* printers */
int printString(va_list);
int printChar(va_list);
int printDecimal(va_list);
int printInteger(va_list);
int printBinary(va_list);
int printUnsigned(va_list);
int printOctal(va_list);
int printHexaLower(va_list);
int printHexaUpper(va_list);

/* putchar.c */
int _putchar(char);
int _buffer(char);

/****** structure ******/

/**
 * struct _format - typedef struct
 *
 * @type: format
 *
 * @f: the function associated
 */

typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif
