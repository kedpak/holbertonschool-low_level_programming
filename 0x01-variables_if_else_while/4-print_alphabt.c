#include <stdio.h>

/**
 * main - prints out the alphabet except 'e' and 'q'
 * Return: returns a string of alphabets
 **/
int main(void)
{
	char alphabet = '`';
	int i;

	i = 0;

	while (i <= 23)
	{
		++alphabet;
		++i;
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet++;
		}
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

