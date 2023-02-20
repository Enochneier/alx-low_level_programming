#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Descriptin: prints the alphabet in lowercase.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
		putchar('\n');
	}

	return (0);
}
