#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

#define fr(i, a, c) for (int i = a; i  < c; i++)
#define sc1(a) scanf("%lld", &a)
#define sc2(a, b) scanf("%lld %lld", &a, &b)
#define LLI long long int
#define ULL unsigned long int;

using namespace std;

int main () {
	string value1;
	long int size;
	int count = 0;
	int count2 = 0;
	char value2[1];

	while(1) {
		cin >> value2[0] >> value1;
		if (value1 == "0" && value2[0] == '0') break;
		else{
			fr(i, 0,value1.size()) {
				if (value1.size() == 1 && value1.at(0) == value2[0]) break;
				if (value1.at(i) == value2[0]){ 
					if (value1.size() == 1) {value1.front() == '0';}
					else{ value1.erase(value1.begin()+i);
						count2++;
						if (value1.size() > 1) i = 0;
						if (value1.size() == 1 && value1.at(0) == value2[0]) value1.at(0) = '0';
						else if (value1.at(i) == value2[0]) value1.erase(value1.begin()+i);
					}
				}
			}
		}

		if (value1.at(0) == value2[0]) 	value1.erase(value1.begin());

		while(value1.at(0) == '0' && value1.size() > 1)
		{
			value1.erase(value1.begin());
		}


		fr(i, 0, value1.size()) if (value1.at(i) == '0') count++;
		if (value1.size() == 1 && value1.at(0) == value2[0]) cout << "0" << "\n";
		// if (count == value1.size() || (value1.size() == 1 && value1.at(0) == value2[0]) || count2) 
		else 
			cout << value1  << "\n";

		count2 = 0;
	}

	return 0;
}

