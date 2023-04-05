#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the number of arguements you passed into it
 * @argc: An argument count
 * @argv: An argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
	}
}
