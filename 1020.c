#include <stdio.h>

int main(){
	int idade, anos, meses, dias;
	
	scanf("%d", &idade);
	
	anos = idade/365;
	idade %= 365;
	meses = idade/30;
	dias = idade%30;
	
	printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias);
	
	return 0;
}