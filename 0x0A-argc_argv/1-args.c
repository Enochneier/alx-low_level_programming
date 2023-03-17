#include <stdio.h>
#include <stdlib.h>
/**
 *Description: 
 *
 */
int main(int argc, char *argv[])
{
	int count;

	printf("\"%s\"\n", argv[0]);
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%d\n", count);
		}
	}
	else 
	{
		printf("Non");
	}
	return (0);
}
