#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <iostream>
#include <vector>

#define fr(i, a, c) for (int i = a; i  < c; i++)
#define sc1(a) scanf("%d", &a)
#define sc2(a, b) scanf("%d %d", &a, &b)
typedef long long int lli;
typedef unsigned long long ull;

using namespace std;

struct Data
{
	int pessoas;
	int consumo;
};

typedef Data data;

void swap(data* a, data* b)
{
	data t = *a;
	*a = *b;
	*b = t;
}

int partition (data arr[], int low, int high)
{
	int pivot = arr[high].consumo;
	int i = (low - 1); 

	for (int j = low; j <= high- 1; j++)
	{
		if (arr[j].consumo <= pivot)
		{
			i++; 
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(data arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}


int main(int argc, char const *argv[])
{

	int n;
	string value;
	float consumo = 0;
	int k,pessoas = 0;
	k=1;

	while(1){
		scanf("%d", &n);

		if (!n) break;
		consumo = 0;
		pessoas = 0;
		data *arr = (data *) malloc(n*sizeof(data));
		for (int i = 0; i < n; ++i)
		{	
			scanf("%d %d", &arr[i].pessoas, &arr[i].consumo);
		}
		for (int i = 0; i < n; ++i)
		{
			consumo += arr[i].consumo;
			pessoas += arr[i].pessoas;
			arr[i].consumo = arr[i].consumo/arr[i].pessoas;
		}
		quickSort(arr, 0, sizeof(arr)/sizeof(arr[0]));
		consumo = consumo/pessoas;
		printf("Cidade# %d:\n", k);
		for (int i = 0; i < n; ++i)
		{
			printf("%d-%d ", arr[i].pessoas, arr[i].consumo);
		}
		value.push_back(to_string(consumo));
		value.erase(value.begin()+value.size()-1);
		value.erase(value.begin()+value.size()-1);
		cout << "\nConsumo medio: " << value << "m3.\n"; 
		printf("\n");
		k++;

	}
	return 0;
}


