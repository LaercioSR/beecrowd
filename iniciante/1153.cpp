#include <iostream>
 
using namespace std;
 
int main() {
    int n, factorial = 1;

    cin >> n;

    for(int i = 0; i < n; i++) {
        factorial *= n-i;
    }

    cout << factorial << endl;
 
    return 0;
}