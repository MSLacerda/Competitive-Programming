#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <list>
#include <vector>

#define fr(i, a, c) for (int i = a; i  < c; i++)
#define sc1(a) scanf("%lld", &a)
#define sc2(a, b) scanf("%lld %lld", &a, &b)
#define LLI long long int
#define ULL unsigned long int;

using namespace std;



int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	vector<string> v;
	int dif,cont = 0;
	dif = 0;
	string in,ant;
	while (cin >> in){
		if (!v.empty() && (v.at(v.size() - 1) == in || v.at(v.size()/2) == in)) {
			cont = 1;
		}else{
			for (int i = 0; i < v.size(); i++){
				if (v.at(i) == in) {
					cont = 1;
					break;
				}
			}
		}
		if (!cont){
			dif++;
		}
		cont = 0;
		v.push_back(in);
	}	

	printf("%d\n", dif);
	return 0;
}


