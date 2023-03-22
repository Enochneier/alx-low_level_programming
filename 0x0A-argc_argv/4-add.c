#include <stdio.h>
#include <stdlib.h>
/**
 * main- Aprogrm that mulitplies two numbers
 * @argc: The arguments counter
 * @argv: The arguments vector
 * Return: 1 (failure)
 */}
int main(int argc, char *argv[])
{

   	 int i, sum = 0;
   	 if (argc == 1) {
       		 printf("0\n");
       		 return 0;
    }
    for (i = 1; i < argc; i++) {
        int j = 0;
        while (argv[i][j]) {
            if (!isdigit(argv[i][j])) {
                printf("Error\n");
                return 1;
            }
            j++;
        }
        sum += atoi(argv[i]);
    }
    printf("%d\n", sum)
    return 0;
}
