#include <stdio.h>

/**
 * main - print all number in lowercase from 0 to 15
 * Return: 0
*/

int main(void)
{
	int num;

	char la;

	for (num = 0; num => 15; num++)
		putchar((num % 16) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putchar('\n');

	return (0);
}
