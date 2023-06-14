#include <stdio.h>

/**
 *main - AProgram that prints its name, followed by anew line.
 *@argc: argumentcount(unused parameter)
 *@argv:argument vector
 * Return: Nothing
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
