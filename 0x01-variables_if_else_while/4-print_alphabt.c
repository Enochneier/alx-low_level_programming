#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main- entry point
 *
 * Description: Print all the letters except q and e
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	putchar('\n');

	return (0);
}
