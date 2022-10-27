#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
	int n1, n2, soma, subt, mult ;
	float div;
	
	setlocale (LC_ALL, "Portuguese");
	{
    printf("----------------------------------------------");
	printf("\n----------------*cauculadora*-----------------\n");
	printf("----------------------------------------------\n");
	
	printf("digite um número: ");
	scanf ("%d",&n1);
	
    printf("digite um número: ");
    scanf ("%d",&n2);
    
    soma = n1 + n2;
	subt = n1 - n2;
	mult = n1 * n2;
	div =  n1 / n2;
	
	printf("\n%d + %d = %d", n1, n2, soma);
	printf("\n%d - %d = %d", n1, n2, subt);
	printf("\n%d * %d = %d", n1, n2, mult);
	printf("\n%d / %d = %.1f", n1, n2, div);
	
	}
	
}
