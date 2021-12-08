#include <iostream>
 
using namespace std;

int gcd(int n1, int n2) {
    while(n2 != 0) {
        int tmp = n2;
        n2 = n1 % n2;
        n1 = tmp;
    }

    return n1;
}
 
int main() {
    int x;

    cin >> x;

    for(int i = 0; i < x; i++) {
        int n1, n2;

        cin >> n1 >> n2;

        cout << gcd(n1,n2) << endl;
    }
 
    return 0;
}