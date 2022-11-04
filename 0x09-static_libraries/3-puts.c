#include "main.h"

/**
 *_puts - prints a string
 *@str: the string
 *by sylva obah
 * Return: the lenght of a string
*/

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);

	}
	_putchar('\n');
}
