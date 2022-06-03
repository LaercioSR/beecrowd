#include <iostream>
 
using namespace std;
 
int main() {
    bool p, r;

    cin >> p >> r;

    if(p & r) {
        cout << 'A' << endl;
    } if(p & !r) {
        cout << 'B' << endl;
    } if(!p) {
        cout << 'C' << endl;
    }
 
    return 0;
}