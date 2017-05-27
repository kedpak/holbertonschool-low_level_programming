#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins used for change
 * @argc: number of elements inputted
 * @argv: amount of money to be convertd to change
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int coin = 0; int i = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(*argv) < 0)
	{
		printf("0\n");
	}
	while (i > 0)
		if (i >= 25)
		{
			i -= 25;
			coin++;
		}
		else if (i >= 10 && i < 25)
		{
			i -= 10;
			coin++;
		}
		else if (i >= 5 && i < 10)
		{
			i -= 5;
			coin++;
		}
		else if (i >= 2 && i < 5)
		{
			i -= 2;
			coin++;
		}
		else if (i < 2)
		{
			i -= 1;
			coin++;
		}
	printf("%d\n", coin);
	return (0);
}
