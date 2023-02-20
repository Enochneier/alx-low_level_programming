#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main- entry_point
 *
 * Description:prints the alphabet in lowercase, and then in uppercase.
 *
 * Returns: Always 0 (success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (low = 'A'; low <= 'Z'; low++)
	{
		putchar(low);
		putchar('\n');
	}

	return (0);
}
