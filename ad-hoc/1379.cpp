#include <iostream>
 
using namespace std;
 
int main() {
    int a, b;

    cin >> a >> b;
    while(a != 0 && b != 0) {
        int c = (2*a) - b;

        cout << c << endl;

        cin >> a >> b;
    }
 
    return 0;
}