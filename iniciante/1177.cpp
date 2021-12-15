#include <iostream>
 
using namespace std;
 
int main() {
    int n[1000];
    int x;

    cin >> x;

    for(int i = 0; i < 1000; i++) {
        n[i] = i % x;

        cout << "N[" << i << "] = " << n[i] << endl;
    }
 
    return 0;
}