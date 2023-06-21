#include "main.h"
#include <stdlib.h>

/**
 * main - Prints the sum of all multiple of 3 and 5 up to 1024
 * Return: Always (success)
 */

int main(void)

{
	int i, z = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d", z);
	return (0);
}	
