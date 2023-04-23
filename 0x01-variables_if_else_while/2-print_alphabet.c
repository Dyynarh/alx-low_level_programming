#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print all alphabet lowercase'
  *Return: Always 0
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar (n);
		putchar (n++);
	}
	putchar(97);
	return (0);
}
