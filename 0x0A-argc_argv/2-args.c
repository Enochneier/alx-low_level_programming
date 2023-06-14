#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: Argument count.
 * @argv: Argument vetor.
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
