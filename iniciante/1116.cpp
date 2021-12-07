#include <iostream>
 
using namespace std;
 
int main() {
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int x, y;
        float z;

        cin >> x >> y;

        if(y == 0) {
            cout << "divisao impossivel" << endl;
        } else {
            z = x / float(y);
            printf("%.1f\n", z);
        }
    }
 
    return 0;
}