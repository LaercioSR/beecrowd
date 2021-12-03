#include <stdio.h>

int main(){
	int valor, valorC, q100, q50, q20, q10, q5, q2, q1;
	
	scanf("%u", &valor);
	
	valorC = valor;
	
	q100 = valor/100;
	valor %= 100;
	q50 = valor/50;
	valor %= 50;
	q20 = valor/20;
	valor %= 20;
	q10 = valor/10;
	valor %= 10;
	q5 = valor/5;
	valor %= 5;
	q2 = valor/2;
	valor %= 2;
	q1 = valor/1;
	valor %= 1;
	
	printf("%d\n", valorC);
	printf("%d nota(s) de R$ 100,00\n", q100);
	printf("%d nota(s) de R$ 50,00\n", q50);
	printf("%d nota(s) de R$ 20,00\n", q20);
	printf("%d nota(s) de R$ 10,00\n", q10);
	printf("%d nota(s) de R$ 5,00\n", q5);
	printf("%d nota(s) de R$ 2,00\n", q2);
	printf("%d nota(s) de R$ 1,00\n", q1);
	
	return 0;
}