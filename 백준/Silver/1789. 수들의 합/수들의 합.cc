#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long N = 0;
long sum = 0;
long i = 0;

int main()
{
	scanf("%d", &N);
	{
		for (i = 1; ; i++)
		{
			sum = sum + i;
			if (sum > N) {
				i--;
				break;
			}
		}
	}

	printf("%d\n", i);
	return 0; 
}