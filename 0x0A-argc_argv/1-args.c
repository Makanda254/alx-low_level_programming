#include <stdio.h>
#include "main.h"
/**
* main - prints the  number of arguments passed to program
* @argc: argument counter
* @argv: points to arguments
* Return: 0 if successful
*/
int main(int argc, char *argv[] __attribute__((unused)))
{

	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}

return (0);
}
