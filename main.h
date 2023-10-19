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

int _bin(va_list val);
int _hex_aux(unsigned long int number);
int _strrev(va_list args);
int _rot13(va_list args);
int _unsigned(va_list args);
int _oct(va_list val);
int _hex(va_list val);
int _HEXi(va_list val);
int _exc_str(va_list val);
int _HEX_aux(unsigned int num);
int _ptr(va_list val);
int _str2(va_list val);
int _stlent(char *s);
int _stlenth(const char *s);
int _putchar(char c);
int _char(va_list var);
int _str(va_list var);
int _perc(void);
int _len(char *str);
int _lenc(const char *str);
int _int(va_list myNums);
int _dec(va_list myNums);
int _printf(const char *format, ...);


#endif
