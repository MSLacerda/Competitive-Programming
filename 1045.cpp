#include <stdio.h>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
int main(int argc, char const *argv[])
{
	float a,b,c;
	vector<float> v;
	scanf("%f %f %f", &a, &b, &c);
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);

	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	
	if (v.at(0) >= v.at(1) + v.at(2)) printf("NAO FORMA TRIANGULO\n");
	else{
		if (pow(v.at(0), 2) == (pow(v.at(1), 2) + pow(v.at(2), 2))) printf("TRIANGULO RETANGULO\n");
		if (pow(v.at(0), 2) > (pow(v.at(1), 2) + pow(v.at(2), 2))) printf("TRIANGULO OBTUSANGULO\n");
		if (pow(v.at(0), 2) < (pow(v.at(1), 2) + pow(v.at(2), 2))) printf("TRIANGULO ACUTANGULO\n");
		
		if (v.at(0) == v.at(1) && v.at(1) == v.at(2)) printf("TRIANGULO EQUILATERO\n");
		else if (v.at(0) == v.at(1) || v.at(1) == v.at(2) || v.at(0) == v.at(2)) printf("TRIANGULO ISOSCELES\n");	
	}
	
	return 0;
}