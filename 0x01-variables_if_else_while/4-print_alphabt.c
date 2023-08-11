#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * except q and e
 * Return: Aways 0 (Sucess)
 */

int main(void)
{
	char ch = 'a';

	for(ch; ch <= z ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
