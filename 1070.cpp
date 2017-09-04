#include <stdio.h>
#include <vector>
#include <stdlib.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int cases,aux, i = 0;
	scanf("%d", &cases);
	aux = cases;

	while (i < 6)
	{
		if (cases % 2 != 0){
			i++;
			printf("%d\n",cases);
		}
		cases++;
	}

	return 0;
}