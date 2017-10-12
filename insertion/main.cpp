#include <bits/stdc++.h>


using namespace std;

int main() {
	int min,aux;
	int vetor[10] = {4, 6, 1, 3, 5, 10, 9, 2, 7, 8};
	for (int i = 0; i < 10; ++i)
	{
		min = i;
		for (int j = (i+1); j < 10; ++j) if (vetor[j] < vetor[min]) min = j;
		aux = vetor[i];
		vetor[i] = vetor[min];
		vetor[min] = aux;
	}
	for (int i = 0; i < 10; ++i) cout << vetor[i] << " ";
	printf("\n");
	return 0;
}