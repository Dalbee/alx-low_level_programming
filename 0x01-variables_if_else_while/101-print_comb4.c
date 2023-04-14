#include <stdio.h>

/**
 * main - Entry point. Prog. combination of three digits: N1, N2, N3
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int N1, N2, N3;

	for (N1 = 0; N1 < 8; N1++)
	{
		for (N2 = N1 + 1; N2 < 9; N2++)
		{
			for (N3 = N2 + 1; N3 <= 9; N3++)
			{
				putchar((N1 % 10) + '0');
				putchar((N2 % 10) + '0');
				putchar((N3 % 10) + '0');

				if (N1 != 7 || N2 != 8 || N3 != 9)
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
