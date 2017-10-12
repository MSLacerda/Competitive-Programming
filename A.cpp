#include <vector>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int max(int *v){
	int maior = -999999;
	int freq = 0;
	for (int i = 0; i < 10; ++i)
	{
		if (v[i] > maior){
			maior = v[i];
			freq = i;
		}

	}

	return freq;
}

int main(int argc, char const *argv[])
{
	vector<int> v;
	int vet[10000];
	int a,b,x,y,aux,maior;


	scanf("%d %d", &a, &b);

	for (int i = 0; i < a; ++i)
	{
		v.push_back(1);
	}

	for (int i = 0; i < b; ++i)
	{
		scanf("%d %d", &x, &y);

		for (int j = x; j <= y; ++j)
		{
			vet[v.at(j)]++;
		}

		maior = max(vet);

		for (int i = x; i <= y; ++i)
		{
			if (v.at(i) + maior >= 9)
				v.at(i) = (v.at(i) + maior)-9;
			else
				v.at(i) = v.at(i)+maior;
		}

		for (int i = 0; i < 10 ; ++i)
		{
			vet[i] = 0;
		}

	}



	for (int i = 0; i < a; ++i)
	{
		printf("%d\n",v.at(i));
	}

	return 0;
}