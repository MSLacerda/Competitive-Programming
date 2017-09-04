#include <stdio.h>

int main(int argc, char const *argv[])
{
	float aux; 
	int count = 0;

	for (int i = 0; i < 6; ++i)
	{	
		scanf("%f", &aux);
		if (aux > 0) count++;
	}

	printf("%d valores positivos\n", count);
}