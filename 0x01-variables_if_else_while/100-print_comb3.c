#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0
*/
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; didgit1 < 9; didgit1++)

	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			purchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
			continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
