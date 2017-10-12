#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <list>
#include <vector>

#define fr(i, a, c) for (int i = a; i  < c; i++)
#define sc1(a) scanf("%d", &a)
#define sc2(a, b) scanf("%d %d", &a, &b)
typedef long long int lli;
typedef unsigned long long ull;

using namespace std;

int main(int argc, char const *argv[])
{
	long int val, i = 1;
	string ass, panel;

	while(1){
		cin >> ass;
		if (ass == "0") break;
		cin >> panel;
		if (i > 1) printf("\n");
		val = panel.find(ass);
		if (val < panel.size())
			printf("Instancia %ld\nverdadeira\n",i);
		else
			printf("Instancia %ld\nfalsa\n",i);
		i++;
	}

	return 0;
}


