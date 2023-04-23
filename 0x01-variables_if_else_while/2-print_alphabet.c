#include <stdio.h>
#include <stdlib.h>
#include <time>

/**
  *main - Entry point
  *Description: 'print all alphabet lowercase'
  *Return: Always 0
  */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);

	putchar ('\n');

	return (0);
}
