#include <stdio.h>

int main(){
	double salario, vendas, total;
	char nome;
	
	scanf("%s", &nome);
	scanf("%lf", &salario);
	scanf("%lf", &vendas);
	
	total = salario + (vendas * 0.15);
	
	printf("TOTAL = R$ %.2lf\n", total);	
	
	return 0;
}