#include <iostream>
 
using namespace std;
 
int main() {
    int n[20];

    for(int i = 19; i >= 0; i--) {
        int x;

        cin >> x;

        n[i] = x;
    }
    for(int i = 0; i < 20; i++)
        cout << "N[" << i << "] = " << n[i] << endl;
 
    return 0;
}