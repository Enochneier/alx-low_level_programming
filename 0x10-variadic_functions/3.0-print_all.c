#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - A function prints anyting.
 * @format: A list of type of arguments passed to the function.
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *temp;
	int i = 0;

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		if (format[i] == 'c')
		{
			printf("%c", (char) va_arg(ap, int));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(ap, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", (float) va_arg(ap, double));
		}
		else if (format[i] == 's')
		{
			temp = va_arg(ap, char*);
			if (temp != NULL)
			{
				printf("%s", temp);
			}
			else
			{
				printf("(nil)");
			}
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}

