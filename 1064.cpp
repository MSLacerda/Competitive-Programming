#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int count, num;
	for (int i = 0; i < 5; ++i)
	{
		scanf("%f", &num);
		if (num%2 == 0){
			count++;
		}
	}

	printf("%d valores pares\n",count);
	return 0;
}