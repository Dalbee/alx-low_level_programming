#include <stdio.h>

/**
 * main - This prog. prints all possible diff. combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c;

	for (a = 0; a < 100; a++)
	{
	b = a / 10;
	c = a % 10;
	if (b < c)
	{
	putchar(b + '0');
	putchar(c + '0');
	if (a < 89)
	{
	putchar(44);
	putchar(32);
}
}
	}

	putchar('\n');

	return (0);
}
