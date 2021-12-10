#include <iostream>
 
using namespace std;
 
int main() {
    int n, n1 = 0, n2 = 1;

    cin >> n;

    for(int i = 0; i < n; i++) {
        if(i == 0) {
            cout << n1;
            continue;
        }
        cout << " " << n2;
        int tmp = n1;
        n1 = n2;
        n2 = tmp + n2;
    }
    cout << endl;

    return 0;
}