#include <stdio.h>
#include <stdlib.h>
/**
 * main- Aprogrm that mulitplies two numbers
 * @argc: The arguments counter
 * @argv: The arguments vector
 * Return: 1 (failure)
 */
int main(int argc, char **argv)
{
	int a;
	int b;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;

		printf("%d\n", result);
		return (0);
	}
}	
