#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define fr(i, a, c) for (int i = a; i  < c; i++)
#define sc1(a) scanf("%lld", &a)
#define sc2(a, b) scanf("%lld %lld", &a, &b)
#define LLI long long int
#define ULL unsigned long int;

void convert(int a, int *vect){
	int count = 0;
	while(a>-1 || count != 31){
		if (a == 1) vect[count] == 1;
		else if (a == 0) vect[count] == 0;
		else {
			vect[count] = a%2;
			a = a/2;
		}
		count++;
	}
}

int *sum(int *vet1, int *vet2){
	int vet[32]
	memset(vet, 0, 32);
	fr(i, 0, 32) {
		if ((vet1[i] == 1 && vet2[i] == 0) || (vet2[i] == 1 && vet1[i] == 0)) vet[i] = 1;
		if (vet1[i] == 1 && vet2[i] == 1) vet[i] == 0;

	}

	return vet;
}


int main () {
	ULL value1, value2;
	int vect1[31];
	int vect2[31];
	int result[31];
	while(sc2(value1, value2) != EOF) {
		memset(vect1, 0, 32);
		memset(vect2, 0, 32);
		if (value1 == value2) printf("0\n",);
		else{
			convert(value1, vect1);
			convert(value2, vect2);
		}
	}

return 0;
}

