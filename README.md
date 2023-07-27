_PRINTF
====

Function that prints a character string.

# Motivation #

This project is part of our curriculum at the Holberton School.

# Description #

Create a function similar to printf in the C programming language, using variable functions, structures and support functions. This program is written to use an alternative method to the basic printf function. In this way, the written program will be able to display characters, strings, integers and decimals (base 10).

If the function is compiled and executed successfully, it should return the number of characters printed, with the exception of the null byte (which terminates the string).
If the function fails:
- On error, return (-1);
- String argument = `NULL`, `return (-1);`.

If the format specifier is not known, the output will print the format specifier as a string.

# Prototype #
`Int _printf (const char *format, …);`
-	Returns: The number of characters printed (excluding the null byte used to end output to strings)
-	Write output to stdout, the standard output stream
-	Format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail.

# File Usage #

| Name File | Description | 
| -------- | -------- | 
| _printf.c    |  Function that print a character string with specifier.    | 
| _handler.c    | Check for % and search the specifier.    | 
| main.h    | Contain all libraries, functions and structures for the project.    | 
| _strlen.c    | Function that  iterates length of the string.  | 
| _putchar.c    | Function that print a character.    | 
| printChar.c    | Function that print a character with `%c`.    | 
| printString.c    | Function that print a string with `%s`.    | 
| printDecimal.c    | Function that print a decimal with `%d`.    | 
| printInteger.c    | Function that print an integer with `%i`.    |
| man_3_printf.1    | Man page of the `_printf`function.    | 
       
# Format Specifiers #
The `_printf` program replicate the effects of the listed % format specifiers as when used with printf


| Function Name | Description | Format Specifier |
| -------- | -------- | -------- |
| `printChar`    | print a char    | `c`    |
| `printString`    | print a string    | `s`    |
| `printDecimal`    | print a decimal    | `d`    |
| `printInteger`    | print an integer    | `i`    |

# Compilation #

```c
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```

# Testing the programm #

The `main.c` File Test
You'll make a main.c file to test the program, in order to see if the `_printf` function works exactly like how regular printf manages to. The `main.c` file should contain the code displayed below.

```c
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```

# Output Check #

After compiling, your output should look something like what’s displayed below.

```bash
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```
# Bugs #

No known bugs.

## 🙇 Author
#### Cassandra BOUDIER
- Github: [@CassandraB670](https://github.com/CassandraB670)

#### Mickaël TARTAR
- Github: [@mickaeltartar](https://github.com/mickaeltartar)

## ➤ License
« Copyright © <27/07/2023>, <copyright Cassandra BOUDIER & Mickaël TARTAR>
Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the “Software”), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

The Software is provided “as is”, without warranty of any kind, express or implied, including but not limited to the warranties of merchantability, fitness for a particular purpose and noninfringement. In no event shall the authors or copyright holders X be liable for any claim, damages or other liability, whether in an action of contract, tort or otherwise, arising from, out of or in connection with the software or the use or other dealings in the Software.

Except as contained in this notice, the name of the <copyright Cassandra BOUDIER & Mickaël TARTAR> shall not be used in advertising or otherwise to promote the sale, use or other dealings in this Software without prior written authorization from the <copyright Cassandra BOUDIER & Mickaël TARTAR>. »
