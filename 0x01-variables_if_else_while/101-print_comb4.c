#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: Always 0 (success)
 */
int main(void)
{
	int one = '0';
	int ten = '0';
	int hundred = '0';

	for (hundred = '0'; hundred <= '9'; hundred++)
	{
		for (ten = '0'; ten <= '9'; ten++)
		{
			for (one = '0'; one <= '9'; one++)
			{
			if (!((one == ten) || (ten == hundred) || (ten > one) || (hundred > ten)))
				{
					putchar(hundred);
					putchar(ten);
					putchar(one);
					if (!(one == '9' && ten == '8' && hundred == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
