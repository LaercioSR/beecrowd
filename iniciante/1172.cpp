#include <iostream>
 
using namespace std;
 
int main() {
    int x[10];

    for(int i = 0; i < 10; i++) {
        int y;

        cin >> y;

        if(y < 1) {
            y = 1;
        }
        x[i] = y;

        cout << "X[" << i << "] = " << x[i] << endl;
    }
 
    return 0;
}