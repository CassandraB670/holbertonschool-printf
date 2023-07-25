#ifndef MAIN_H_
#define MAIN_H_

/****** libraries ******/

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* printf.c */

int _printf(const char *format, ...);

/* tools */
int _strlen(const char *s);
int _print(char *);

/* handler.c */
int _handler(const char *str, va_list);
int percentHandler(const char *str, va_list list, int *i);

/* printers */
int printString(va_list);
int printChar(va_list);

/* putchar.c */
int _putchar(char);

/****** structure ******/

typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif
