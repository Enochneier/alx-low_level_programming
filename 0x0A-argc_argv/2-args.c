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
        int count;

	printf("%s\n", argv[0]);

        if (argc > 1)
        {
		for (count = 1; count < argc; count++)
		{
			 printf("%s\n", argv[count]);
                }
        }
        else
        {
                printf("Not applicable");
        }
        return (0);
}

