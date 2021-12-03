#include <stdio.h>

int main(){
	int horas, velocidade, distancia;
	float consumo;
	
	scanf("%d", &horas);
	scanf("%d", &velocidade);
	
	distancia = horas*velocidade;
	consumo = distancia/12.0;
	
	printf("%.3f\n", consumo);
	
	return 0;
}