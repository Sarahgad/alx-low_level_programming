#include<stdio.h>
#include"main.h"
/**
 * _strlen_recursion - prints a string, followed by a new line.
 *@s: The character to print
 *Return: On success 1.
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
