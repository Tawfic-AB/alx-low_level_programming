#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: result of number's last digit
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ls < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
