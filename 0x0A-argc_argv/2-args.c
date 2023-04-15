#include <stdio.h>
#include "main.h"

/**
*main - this prog. prints all arguments it receives
*@argc: the no. of arguments
*@argv: the array of arguments
*
*Return: Always 0 (Success)
*/

int main(int argc, char *argv[])

{
int k;

	for (k = 0; k < argc; k++)

	{

		printf("%s\n", argv[k]);

	}


	return (0);

}
