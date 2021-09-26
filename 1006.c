#include <stdio.h>

int main(){
	float A, B, C, a, b, c, MEDIA;
	
	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);
	
	a = A * 2;
	b = B * 3;
	c = C * 5;
	MEDIA = (a + b + c) / 10;
	
	printf("MEDIA = %.1f\n", MEDIA);
	
	return 0;
}