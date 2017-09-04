#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b, c;
	vector<int> v;
	cin >> a >> b >> c;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);

	sort(v.begin(), v.end());

	for (int i = 0; i < 3; ++i)
	{
		cout << v.at(i) << endl;
	}

	cout << "\n";

	cout << a << endl << b << endl << c << endl;

	return 0;
}