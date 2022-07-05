#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    while(n--) {
        int x, y, z;

        cin >> x >> y;

        z = x*y/2;

        cout << z << " cm2" << endl;
    }
 
    return 0;
}