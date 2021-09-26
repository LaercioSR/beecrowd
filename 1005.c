#include <stdio.h>

int main(){
	float a, b, A, B, MEDIA;
	
	scanf("%f", &a);
	scanf("%f", &b);
	
	A = a * 3.5;
	B = b * 7.5;
	MEDIA = (A + B) / 11;
	
	printf("MEDIA = %.5f\n", MEDIA);
	
	return 0;
}