#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct check - check for the conversion specifiers
 * @identifier: points to the specifier
 * @ funptr: pointer to function
 */

typedef struct check
{
	char *identifier;
	int (*funptr)();
} checker;

int _putchar(char c);
int _char(va_list var);
int _str(va_list var);
int _perc(void);
int _len(char *str);
int _lenc(const char *str);
int _int(va_list myNums);
int _decimal(va_list myNums);
int _printf(const char *format, ...);


#endif
