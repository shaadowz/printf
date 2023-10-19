#include "main.h"
/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: c.
 */
int _stlent(char *s)
{
	int h;

	for (h = 0; s[h] != 0; h++)
		;
	return (h);

}
/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: c
 */
int _stlenth(const char *s)
{
	int v;

	for (v = 0; s[v] != 0; v++)
		;
	return (v);
}
