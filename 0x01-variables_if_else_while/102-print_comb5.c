#include <stdio.h>

/**
 * main - returns a combination of number
 * Return always 0 if successful
 */
int main(void)
{
	int i, j;
for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 100; j++)
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');

	return (0);
}
