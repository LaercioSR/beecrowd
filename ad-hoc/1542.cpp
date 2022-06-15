#include <iostream>
 
using namespace std;
 
int main() {
    int q, d, p, r;

    cin >> q;
    while(q != 0) {
        cin >> d >> p;

        r = q*d*p/(p-q);

        cout << r << " pagina" << (r != 1 ? "s" : "") << endl;

        cin >> q;
    }
 
    return 0;
}