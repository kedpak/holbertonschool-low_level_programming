#include <stdio.h>

int main(void)
{
	long i, n, k, m, l;

	n = 1;
	k = 2;
	for(i = 0; i < 16; i++)
	{
	
	
		if (n % 2 == 0)
		{
			m = n;
		}
		if (k % 2 == 0)
		{
			l = k;
		}
		
		n = n +k;
		k = n +k;
	}
	printf("%li", m + l);
	putchar('\n');
	return (0);
}
