#include <stdio.h>

/***
 * main - Aprogram that prints the number of arguments passes into it.
 * @argc: Argument count
 * @argv: Argument vector(unused)
 * Return: Nothing
 */
int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
