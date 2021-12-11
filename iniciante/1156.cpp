#include <iostream>
 
using namespace std;
 
int main() {
    double s = 1;

    for(float i = 3, j = 2; i <= 39; i+=2, j*=2)
        s += i/j;

    printf("%.2lf\n", s);
 
    return 0;
}