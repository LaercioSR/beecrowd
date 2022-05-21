#include <iostream>
 
using namespace std;

unsigned long long int factorial(unsigned short int x) {
    if(x > 1)
        return x * factorial(x - 1);
    else
        return 1;
}
 
int main() {
    unsigned short int m, n;
    unsigned long long int fac_m, fac_n, fac_sum;

    while(scanf("%hi %hi", &m, &n) != EOF) {
        fac_m = factorial(m);
        fac_n = factorial(n);
        fac_sum = fac_m + fac_n;
        cout << fac_sum << endl;
    }
}