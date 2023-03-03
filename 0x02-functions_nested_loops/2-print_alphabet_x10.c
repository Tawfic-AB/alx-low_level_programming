#include "main.h"

/**
 * print_alphabet - Prints 10 times the alphabet.
 *
 * Return: x10 a-z
 */
void print_alphabet(void)
{
	int n, co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
