#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
	float n1, n2, soma, subt, mult, divi;
	
	
	setlocale (LC_ALL, "Portuguese");
	{
    printf("----------------------------------------------");
	printf("\n----------------*cauculadora*-----------------\n");
	printf("----------------------------------------------\n");
	
	printf("digite um número: ");
	scanf ("%f",&n1);
	
    printf("digite um número: ");
    scanf ("%f",&n2);
    
    soma = n1 + n2;
	subt = n1 - n2;
	mult = n1 * n2;
	divi =  n1 / n2;
	
	printf("\n%.f + %.f = %.f", n1, n2, soma);
	printf("\n%.f - %.f = %.f", n1, n2, subt);
	printf("\n%.f * %.f = %.f", n1, n2, mult);
	printf("\n%.f / %.f = %.1f", n1, n2, divi);
	
	}
	
}
