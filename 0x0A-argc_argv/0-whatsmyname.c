#include "main.h"

/**
 * main - begining of the program
 * @argc: argument counter
 * @argv: array pointer to strings
 * by sylva
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
