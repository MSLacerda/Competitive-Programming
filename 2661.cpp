#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> div;
	int num;
	scanf("%d", &num);
	
	for (int i = 2; i < num; i++) {
		if (num % i == 0) div.push_back(i);
	}


	for (int i = 0; i < div.size() ; i++) {
		cout << div.at(i) << "\n";
	}


		
	return 0;
}
