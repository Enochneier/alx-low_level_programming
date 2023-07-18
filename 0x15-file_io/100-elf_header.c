#include <stdio.h>
#include "main.h"
#include <elf.h>

/**
 * main - program that displays the information contained in the ELF 
 * header at the start of an ELF file.
 * @argc: The number of arguments
 * @argv: The pointer to array of arguments
 * Return: 1 on success, error code on failure
 */

int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
