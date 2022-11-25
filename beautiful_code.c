#include <stdio.h>

/**
  * main - a beutiful code that passes betty :)
  *
  * @argc: counts the arguments
  * @argv: stores the arguments
  *
  * Return: Always 0.
  */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	printf("Look, I passed Betty, It counts %d\n", argc);
	return (0);
}
