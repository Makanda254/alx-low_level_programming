#include <stdio.h>
#include "main.h"
/**
* main - prints name of program
* @argv: points to array of arguments
* @argc: is the  cou
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);

return (0);
}
