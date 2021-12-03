#include <stdio.h>
#include <stdlib.h>

int fibonot(pos, cont, x, y) {
    int z;

    for(z = x+1; z < y; z++, cont++){
        if(cont + 1 == pos){
            return z;
        }
    }

    fibonot(pos, cont, y, x+y);
}

int main(){
    int pos, numFibonot;

    scanf("%d", &pos);

    numFibonot = fibonot(pos, 0, 1, 1);

    printf("%d\n", numFibonot);

	return 0;
}