#include <stdio.h>

/**
 * main - Entry point
 * author: freya
 * Return: Always 0 (Success)
 */
int main(void)
{
	char freya;

	for (freya = 'a'; freya <= 'z'; freya++)
	{
		if (freya != 'q' && freya != 'e')
			putchar(freya);
	}
	putchar('\n');
	return (0);
}
