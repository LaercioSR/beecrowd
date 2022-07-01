#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    unsigned long int r = 0;

    cin >> n;

    for(int i = n-2; i > 1; i--) {
        r += i;
    }

    cout << r << endl;
 
    return 0;
}