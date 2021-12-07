#include <iostream>
 
using namespace std;
 
int main() {
    int c;

    cin >> c;

    for(int i = 0; i < c; i++) {
        int n1, n2, rr, re, num_r;
        char op, eq;

        cin >> n1 >> op >> n2 >> eq >> rr;

        if(op == '+') {
            re = n1 + n2;
        } else if(op == '-') {
            re = n1 - n2;
        } else if(op == 'x') {
            re = n1 * n2;
        } else if(op == '/') {
            re = n1 / n2;
        }
        
        if(rr > re) {
            num_r = rr-re;
        } else {
            num_r = re-rr;
        }

        cout << "E";
        for(int i = 0; i < num_r; i++) {
            cout << "r";
        }
        cout << "ou!" << endl;
    }
 
    return 0;
}