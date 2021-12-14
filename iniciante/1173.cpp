#include <iostream>
 
using namespace std;
 
int main() {
    int n[10];
    int x;

    cin >> x;

    for(int i = 0; i < 10; i++) {
        n[i] = x;

        cout << "N[" << i << "] = " << n[i] << endl;
        x *= 2;
    }
 
    return 0;
}