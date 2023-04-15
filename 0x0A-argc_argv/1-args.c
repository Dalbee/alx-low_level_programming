#include <stdio.h>
#include "main.h"

/**
*main - a prog. that prints the no of arguments passed into it
*@argc: the no. of arguments
*@argv: the array of arguments
*
*Return: Always 0 (Success)
*/

int main(int argc, char *argv[])

{

(void) argv; /*Please Ignore argv*/

	printf("%d\n", argc - 1);

	return (0);
}
