#include "main.h"

/**
 * main - prints the alpha in lowercase
 * Return: always 0  (success)
*/

void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}
