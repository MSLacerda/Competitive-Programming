#include <bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
	int *vetor, n, aux = 0;
	scanf("%d", &n);
	memset(vetor, 0, n);

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			if (j+1 == n) {
				continue;
			}else if (vetor[j+1] < vetor[j]){
				aux = vetor[j+1];
				vetor[j+1] = vetor[j]; 
				vetor[j] = aux;
			}	
		}
	}	

	return 0;
}

