#include <stdio.h>

int main(){
	int num, horas;
	float valor, salario;
	
	scanf("%d", &num);
	scanf("%d", &horas);
	scanf("%f", &valor);
	
	salario = valor * horas;
	
	printf("NUMBER = %d\n", num);
	printf("SALARY = U$ %.2f\n", salario);
	
	return 0;
}