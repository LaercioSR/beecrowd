#include <iostream>
 
using namespace std;
 
int main() {
    int n, p, q, r;
    char c;

    cin >> n;
    cin >> p >> c >> q;

    r = c == '+' ? p+q : p*q;

    if(r > n) {
        cout << "OVERFLOW" << endl;
    } else {
        cout << "OK" << endl;
    } 
 
    return 0;
}