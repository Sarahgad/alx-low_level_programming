#include<stdio.h>
/**
 * main - Entry point
 * Description: 'the program's printing'
 * @void: describe the parameter
 * Return: Always 0 (Success)*
 */
int main(void)
{
int n;

for (n = 1; n <= 100; n++)
{
	if ((n % 3 == 0) && (n % 5 == 0))
	printf("FizzBuzz");
	else if ((n % 3 == 0) && (n % 5 != 0))
	printf("Fizz");
	else if ((n % 5 == 0) && (n % 3 != 0))
	printf("Buzz");
	else
	printf("%d", n);
	if (n != 100)
	printf(" ");
}
	printf("\n");
	return (0);
}
