#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}


int main () {
	int cont,n;

	int *vet, *vet2;
	while(scanf("%d", &n) != EOF){
		vet = (int*) malloc(n*sizeof(int));
		vet2 = (int*) malloc(n*sizeof(int));
		cont = 0;

		for (int i = 0; i < n; ++i)
		{
			cin >> vet[i];
		}

		for (int i = 0; i < n; ++i)
		{
			cin >> vet2[i];
		}


		for (int i = 0; i < n; ++i)
		{
			if (vet2[i] > vet[i]) cont += vet2[i] - vet[i];
		}

		cout << cont << endl;
	}

}