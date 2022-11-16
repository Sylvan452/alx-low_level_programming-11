#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - Finds the right operation
 * @s: String character representing the operation
 * Return: A pointer to a function
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};

	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}

	return (0);
	
}
