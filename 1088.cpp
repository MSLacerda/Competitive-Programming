#include <bits/stdc++.h>

using namespace std;


int main()
{
	int *vetor = new int[100];
	long int n;
	int aux, count = 0, x, j;
	while (1) {
		scanf("%ld", &n);
		if (n == 0) break;
		memset(vetor, 0, n);
		for (int i = 1; i <= n; ++i)
		{
			scanf("%d", &vetor[i]);
		}

		for (int i = 1; i <= n; ++i)
		{
			while (vetor[i] != i){
				count += 2*(vetor[i] - i) - 1;
				aux = vetor[vetor[i]];
				vetor[vetor[i]] = vetor[i];
				vetor[i] = aux;
			}
		}	


		if (count % 2 == 0) cout << "Carlos" << "\n";
		else cout << "Marcelo" << "\n";
		count = aux = n = 0;
	}
	return 0;
}
