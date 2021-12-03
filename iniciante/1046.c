#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, horas;

	scanf("%d %d", &a, &b);

	if (a < b) {
        horas = b - a;
	} else {
        horas = (24 - a) + b;
	}

	printf("O JOGO DUROU %d HORA(S)\n", horas);

	return 0;
}