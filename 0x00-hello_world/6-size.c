#include <stdio.h>

int main()
{
	char charSize;
	int intSize;
	long longSize;
	double doubleSize;
	float floatSize;
	
	printf("Size of a char: %d byte(s)\n", sizeof(charSize));
	printf("Size of an int: %d byte(s)\n", sizeof(intSize));
	printf("Size of a long int: %d byte(s)\n", sizeof(longSize));
	printf("Size of a long long int: %d byte(s)\n", sizeof(doubleSize));
	printf("Size of a float: %d byte(s)\n", sizeof(floatSize));
	
	return 0;
}
