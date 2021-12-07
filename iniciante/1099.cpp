#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int x, y, z = 0, bigger, smaller;

        cin >> x >> y;

        if(x > y) {
            bigger = x;
            smaller = y;
        } else {
            bigger = y;
            smaller = x;
        }

        for(int i = smaller+1; i < bigger; i++) {
            if(i % 2 != 0) {
                z += i;
            }
        }
        cout << z << endl;
    }
 
    return 0;
}