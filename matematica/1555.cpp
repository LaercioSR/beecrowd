#include <iostream>
 
using namespace std;

int func_rafael(int x, int y) {
    return ((3*x)*(3*x))+(y*y);
}

int func_beto(int x, int y) {
    return (2*(x*x))+((5*y)*(5*y));
}

int func_carlos(int x, int y) {
    return (-100*x)+(y*y*y);
}
 
int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
        int x, y, r_rafael, r_beto, r_carlos;
        cin >> x >> y;

        r_rafael = func_rafael(x, y);
        r_beto = func_beto(x, y);
        r_carlos = func_carlos(x, y);

        if(r_rafael > r_beto && r_rafael > r_carlos) {
            cout << "Rafael ganhou" << endl;
        } else if(r_beto > r_carlos) {
            cout << "Beto ganhou" << endl;
        } else {
            cout << "Carlos ganhou" << endl;
        }
    }
}