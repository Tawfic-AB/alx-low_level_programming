#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: a pointer to the memory area to be filled.
 * @b: the desired value to be filled.
 * @n: number of bytes to be filled.
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
