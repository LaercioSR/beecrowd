#include <iostream>
 
using namespace std;
 
int main() {
    int n, min, pos;

    cin >> n;
    
    int x[n];

    for(int i = 0; i < n; i++) {
        cin >> x[i];
        if(i == 0 || x[i] < min) {
            min = x[i];
            pos = i;
        }
    }
    cout << "Menor valor: " << min << endl;
    cout << "Posicao: " << pos << endl;
 
    return 0;
}