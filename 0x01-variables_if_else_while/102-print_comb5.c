#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int o, p;

	for (o = 0; o < 100; o++)
	{
		for (p = 0; p < 100; p++)
		{
			if (o < p)
			{
				putchar((o / 10) + 48);
				putchar((o % 10) + 48);
				putchar(' ');
				putchar((p / 10) + 48);
				putchar((p % 10) + 48);
				if (o != 98 || p != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
