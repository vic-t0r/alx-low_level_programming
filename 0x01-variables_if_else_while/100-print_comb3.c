#include <stdio.h>
/**
 * main - main prints all possible different combination of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)

	{
		for (ones = '0'; ones <= '9'; ones++)/*prints ones digit*/
			if (!((ones == tens) || (tens > ones)))/*eliminates repitetion*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/*adds comma and space*/
				{
					putchar(',');
					putchar(' ');
				}

			}
	}

	putchar('\n');

	return (0);
}

