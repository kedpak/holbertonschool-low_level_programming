#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
/**
 * main -prints string
 * Return: a string
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	
	return (1);

}

