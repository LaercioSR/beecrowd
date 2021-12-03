#include <stdio.h>
#include <stdlib.h>

int main(){
	int cod, quant;
	double valor;

	scanf("%d %d", &cod, &quant);

	if(cod == 1) {
        valor = quant * 4.0;
	} else if(cod == 2) {
	    valor = quant * 4.5;
	} else if(cod == 3) {
	    valor = quant * 5.0;
	} else if(cod == 4) {
	    valor = quant * 2.0;
	} else if(cod == 5) {
	    valor = quant * 1.5;
	}

	printf("Total: R$ %.2lf\n", valor);

	return 0;
}