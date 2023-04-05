#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the number of arguements you passed into it
 * @argc: An argument count
 * @argv: An argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0, m;

	while (i <argc)
	{
		m = i;
		i++;
	}
	printf("%d\n", m);
	return (0);
}
