#include <stdio.h>

int main(int argc, char const *argv[])
{
	float sl;

	scanf("%f", &sl);

	if(sl >= 0.00 && sl <= 400.00){
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", sl+(sl*0.15), (sl*0.15));
	}
	if(sl >= 400.01 && sl <= 800.00){
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", sl+(sl*0.12), (sl*0.12));
	}
	if(sl >= 800.01 && sl <= 1200.00){
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", sl+(sl*0.10), (sl*0.10));
	}
	if(sl >= 1200.01 && sl <= 2000.00){
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", sl+(sl*0.07), (sl*0.07));
	}if(sl >= 2000.01){
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", sl+(sl*0.04), (sl*0.04));
	}
	
	


	return 0;
}