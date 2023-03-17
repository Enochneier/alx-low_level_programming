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
	int count;

	if (argc > 0)
	{
		count = 0;
		while (count < argc)
		{
		printf("%d\n", count);
		count++;
		}
	}	
	else 
	{
		printf("Not applicable");
	}
	return (0);
}
