#include <iostream>
 
using namespace std;
 
int main() {
    float p[] = {1.5, 2.5, 3.5, 4.5, 5.5}, t = 0;
    int n;

    cin >> n;

    while(n--) {
        int cod, q;

        cin >> cod >> q;
        t += p[cod-1001] * q;
    }
    
    printf("%.2f\n", t);
 
    return 0;
}