#include <iostream>
#include <string.h>

#define scout(frase) std::cout << frase << "\n"


using namespace std;

int main(int argc, char const *argv[])
{
	
	string p1,p2,p3;

	cin >> p1 >> p2 >> p3;

	if (p1 == "vertebrado"){
		if (p2 == "ave") {
			if(p3 == "carnivoro") scout("aguia");
			if(p3 == "onivoro") scout("pomba");
		}

		if (p2 == "mamifero") {
			if (p3 == "onivoro") scout("homem");
			if (p3 == "herbivoro") scout("vaca");
		}
	}

	if (p1 == "invertebrado"){
		if (p2 == "inseto") {
			if(p3 == "hematofago") scout("pulga");
			if(p3 == "herbivoro") scout("lagarta");
		}

		if (p2 == "anelideo") {
			if (p3 == "hematofago") scout("sanguessuga");
			if (p3 == "onivoro") scout("minhoca");
		}
	}


	return 0;
}