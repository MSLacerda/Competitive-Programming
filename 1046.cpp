#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int a,b;
	scanf("%d %d", &a, &b);
	if (a < b){
		printf("O JOGO DUROU %d HORA(S)\n", b-a);
	}

	if (a == b){
		printf("O JOGO DUROU 24 HORA(S)\n");
	}

	if (a > b) {
		printf("O JOGO DUROU %d HORA(S)\n", (a-b-24)*-1);
	}
	return 0;
}