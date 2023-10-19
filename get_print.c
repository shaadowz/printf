#include "main.h"

/**
 * get_print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * func_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */
int (*get_print(char s))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'i', _int},
		{'s', _str},
		{'c', _char},
		{'d', _dec},
		{'u', _unsigned},
		{'x', _hex},
		{'X', _HEXi},
		{'b', _bin},
		{'o', _oct},
		{'R', _rot13},
		{'r', _strrev},
		{'S', _exc_str},
		{'p', _ptr},
		{'%', _perc}
		};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
