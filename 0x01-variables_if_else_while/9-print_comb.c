#include <stdio.h>

/**
 * main - Entry point
 * author:freya
 * Return: Always 0 (Success)
 */
int main(void)
{
	int freya;

	for (freya = 48; freya < 58; freya++)
	{
		putchar(freya);
		if (freya != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
