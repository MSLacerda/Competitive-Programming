#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <vector>

#define fr(i, a, c) for (int i = a; i > c; i--)
#define sc1(a) scanf("%d", &a)
#define sc2(a, b) scanf("%d %d", &a, &b)
typedef long long int lli;
typedef unsigned long long ull;

using namespace std;


int main(int argc, char const *argv[])
{
	string palavra;
	int index;
	char a,b;
	while(getline(cin, palavra)) {
		if (palavra.size() == 1){
			cout << palavra << endl;
		}else{
			a = palavra.at(palavra.size() - 1);
			b = palavra.at(palavra.size() - 2);

			if (palavra.size() == 2){
				if (palavra.at(0) == palavra.at(1)){
					index = 0;
				}
				cout << palavra.substr(0, index+1) << endl;
			}else{
				for (int i = palavra.size() - 2; i >= 0; i--){
					if (palavra.at(i) == a && palavra.at(i-1) == b){
						index = i;
						break;
					}
				}
				cout << palavra.substr(0, index+1) << endl;
			}
		}
	}


}


