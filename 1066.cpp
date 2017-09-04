#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int countpar,countimpar,countpos, countneg, num;
	countpos = countneg = countimpar = countpar = 0;
	for (int i = 0; i < 5; ++i)
	{
		scanf("%d", &num);
		if (num > 0) countpos++;
		else if(num < 0) countneg++;


		if (num%2 == 0) countpar++;
		else countimpar++;
		
	}

	printf("%d valor(es) par(es)\n",countpar);
	printf("%d valor(es) impar(es)\n",countimpar);
	printf("%d valor(es) positivo(s)\n",countpos);
	printf("%d valor(es) negativo(s)\n", countneg);
	return 0;
}