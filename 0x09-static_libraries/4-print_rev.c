#include<stdio.h>
#include"main.h"
/**
 * print_rev - writes the character c to stdout
 * @s : Decribe the char arry
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] > '\0'; i++)
	{
	}
	while (i > 0)
	{
	_putchar(s[i - 1]);
	if (i - 1 == 0)
{
	_putchar('\n');
	break;
}
	else
	i--;
	}
	if (*s == (0))
	_putchar('\n');
}
