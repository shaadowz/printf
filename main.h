#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int _putchar(char c);
int _char(va_list var);
int _str(va_list var);
int _perc(void);
int _len(char *str);
int _lenc(const char *str);


#endif
