#include <stdio.h>

int main(int argc, char const *argv[])
{
	float sl,value = 0.00;
	scanf("%f", &sl);

	if (sl >= 0.00 & sl < 2000.00) printf("Isento\n");

	if (sl >= 2000.00 & sl < 3000.00){ 
		value += sl - 2000.00;
		printf("R$ %.2f\n", value*0.08);
	}

	if (sl >= 3000.01 & sl < 4500.00){ 
		value += (sl-3000.00)*0.18;
		value += ((sl - (sl-3000.00)) - 2000.00)*0.08;
		printf("R$ %.2f\n", value);
	}
	if (sl >= 4500.00){
		value += (sl-4500.00)*0.28;
		value += 1000.00*0.08;
		value += 1500.00*0.18;
		printf("R$ %.2f\n", value);
	}


}