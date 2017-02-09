#include <stdio.h>

/**
 * main -prints string
 * Return: a string
 */
int main(void)
{
	int i;
	char c[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	for(i = 0; i < 61; i++) {
		putchar(c[i]);
	}
      	return (1);
}
