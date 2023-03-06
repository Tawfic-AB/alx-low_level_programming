#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @src: source to copy from.
 * @dest: memory area to copy @src into.
 * @n: number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
