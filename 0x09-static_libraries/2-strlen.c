#include "main.h"

/**
 *_strlen - return the length of a string
 *@s: char to check
 *this will check the lenght of a string
 *by sylva obah
 *Return: 0 is success
*/

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
