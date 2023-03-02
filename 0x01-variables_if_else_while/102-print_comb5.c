#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, o, p;

	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			for (o = 48; o <= 57; o++)
			{
				for (p = 48; p <= 57; p++)
				{
					(((o + p) > (n + m) && o >= n) || n < o)
					{
						putchar(n);
						putchar(m);
						putchar(' ');
						putchar(o);
						putchar(p);

						if (n + m + o + p == 227 && n == 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

